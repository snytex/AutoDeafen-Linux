/*
 * Vencord, a Discord client mod
 * Copyright (c) 2024 Vendicated and contributors
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

import { BrowserWindow } from "electron";
import { createServer, Server, Socket } from "net";

let server: Server | null = null;

function startServer() {
    if (server) {
        console.log("[GDAutoDeafen] Server already running");
        return;
    }

    server = createServer((socket: Socket) => {
        console.log("[GDAutoDeafen] Client connected from", socket.remoteAddress);

        socket.on("data", (data: Buffer) => {
            const message = data.toString().trim();
            console.log("[GDAutoDeafen] Received message:", message);

            if (message === "toggle") {
                console.log("[GDAutoDeafen] Triggering deafen toggle");

                const windows = BrowserWindow.getAllWindows();
                for (const win of windows) {
                    win.webContents.executeJavaScript(`
                        Vencord.Webpack.Common.FluxDispatcher.dispatch({
                            type: "AUDIO_TOGGLE_SELF_DEAF"
                        });
                        console.log("[GDAutoDeafen] Executed deafen toggle");
                    `).catch(err => {
                        console.error("[GDAutoDeafen] Failed to execute toggle:", err);
                    });
                }
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
        console.log("[GDAutoDeafen] TCP Server listening on 127.0.0.1:8787");
    });

    server.on("error", (err: Error) => {
        console.error("[GDAutoDeafen] Server error:", err);
        if ((err as any).code === "EADDRINUSE") {
            console.error("[GDAutoDeafen] Port 8787 is already in use! Try restarting your system or checking what application is using this port.");
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
