/*
 * Vencord, a Discord client mod
 * Copyright (c) 2024 Vendicated and contributors
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

import { BrowserWindow } from "electron";
import { createServer, Server, Socket } from "net";

let server: Server | null = null;

function dispatchToWindows(js: string) {
    for (const win of BrowserWindow.getAllWindows()) {
        win.webContents.executeJavaScript(js).catch((err: Error) => {
            console.error("[GDAutoDeafen] Failed to execute JS:", err);
        });
    }
}

function startServer() {
    if (server) {
        console.log("[GDAutoDeafen] Server already running");
        return;
    }

    server = createServer((socket: Socket) => {
        console.log("[GDAutoDeafen] Client connected from", socket.remoteAddress);

        socket.on("data", (data: Buffer) => {
            const message = data.toString().trim();
            console.log("[GDAutoDeafen] Received:", message);

            if (message === "deafen") {
                // Only deafen if Discord is not already deafened.
                dispatchToWindows(`
                    (() => {
                        try {
                            const store = Vencord.Webpack.findByProps("isSelfDeaf");
                            if (store?.isSelfDeaf?.()) return;
                        } catch (e) {}
                        Vencord.Webpack.Common.FluxDispatcher.dispatch({ type: "AUDIO_TOGGLE_SELF_DEAF" });
                        console.log("[GDAutoDeafen] Deafened");
                    })()
                `);
            } else if (message === "undeafen") {
                // Only undeafen if Discord is currently deafened.
                dispatchToWindows(`
                    (() => {
                        try {
                            const store = Vencord.Webpack.findByProps("isSelfDeaf");
                            if (!store?.isSelfDeaf?.()) return;
                        } catch (e) {}
                        Vencord.Webpack.Common.FluxDispatcher.dispatch({ type: "AUDIO_TOGGLE_SELF_DEAF" });
                        console.log("[GDAutoDeafen] Undeafened");
                    })()
                `);
            }
        });

        socket.on("error", (err: Error) => {
            console.error("[GDAutoDeafen] Socket error:", err);
        });

        socket.on("close", () => {
            console.log("[GDAutoDeafen] Client disconnected");
        });
    });

    server.listen(8787, "127.0.0.1", () => {
        console.log("[GDAutoDeafen] TCP server listening on 127.0.0.1:8787");
    });

    server.on("error", (err: Error) => {
        console.error("[GDAutoDeafen] Server error:", err);
        if ((err as NodeJS.ErrnoException).code === "EADDRINUSE") {
            console.error("[GDAutoDeafen] Port 8787 already in use. Restart your system or check what is holding the port.");
        }
    });
}

function stopServer() {
    if (server) {
        server.close(() => {
            console.log("[GDAutoDeafen] Server stopped");
        });
        server = null;
    }
}

export { startServer, stopServer };
