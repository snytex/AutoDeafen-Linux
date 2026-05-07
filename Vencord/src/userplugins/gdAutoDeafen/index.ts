/*
 * Vencord, a Discord client mod
 * Copyright (c) 2024 Vendicated and contributors
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

import { Devs } from "@utils/constants";
import definePlugin from "@utils/types";
import { FluxDispatcher } from "@webpack/common";

const Native = VencordNative.pluginHelpers.GDAutoDeafen as {
    startServer: () => void;
    stopServer: () => void;
};

export default definePlugin({
    name: "GDAutoDeafen",
    description: "Auto deafen/undeafen based on Geometry Dash signals",
    authors: [Devs.Nobody],

    start() {
        try {
            Native.startServer();
            console.log("[GDAutoDeafen] Server started");

            VencordNative.ipc.on("GDAutoDeafen_toggle", () => {
                this.toggleDeafen();
            });
        } catch (err) {
            console.error("[GDAutoDeafen] Failed to start server:", err);
        }
    },

    stop() {
        try {
            Native.stopServer();
            console.log("[GDAutoDeafen] Server stopped");
        } catch (err) {
            console.error("[GDAutoDeafen] Failed to stop server:", err);
        }
    },

    toggleDeafen() {
        try {
            FluxDispatcher.dispatch({
                type: "AUDIO_TOGGLE_SELF_DEAF"
            });

            console.log("[GDAutoDeafen] Toggled deafen");
        } catch (err) {
            console.error("[GDAutoDeafen] Failed to toggle deafen:", err);
        }
    }
});
