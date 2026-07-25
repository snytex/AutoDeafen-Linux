 # AutoDeafen-Linux

This repository was forked from https://github.com/Lynxdeer/AutoDeafen.
It was made to work on Linux systems, which can't use discord hotkeys since they run through Proton in a sandboxed environment.

## Installation

### GUI Installation (Easiest)

- Go to releases and grab the `install-gui.sh` file
- Double-click it (choose "Run"), or run `./install-gui.sh` in a terminal
- Follow the graphical prompts to pick your Geometry Dash folder and Discord client

Uses zenity (GNOME) or kdialog (KDE); it offers to install zenity if neither is present.

### Auto Installation (Terminal)

- Go to releases and grab the `install.sh` file
- Simply run it and finish the installation

### Manual Installation

- You need to [Build Vencord from source](https://docs.vencord.dev/installing/) and add the the AutoDeafen plugin (This will not work without Vencord!)
- Once you got that, enable the newly added plugin and restart your Discord client
- You obviously need the [Geode Modloader](https://geode-sdk.org/) 
- After you got all that done, manually install the geode mod by placing it into the mods directory

That should be it and you can now use the Auto-Deafen feature on Linux!

## FAQ

<details>
  <summary><b>Will you keep updating this mod?</b></summary>
  <br>
  Yes, I plan on keeping this mod up-to-date for as long as possible. Since I rely on this for my own setup, maintaining it is a priority for me as much as it is for the community.
</details>

<details>
  <summary><b>Why do I need Vencord?</b></summary>
  <br>
  Because Discord on Linux (especially on Wayland) handles hotkeys differently, the Vencord plugin acts as the bridge between the Geode mod and your Discord client.
</details>

## Credits

Credits to Lynxdeer for the original repository

## Notes

I will not upload this to the official Geode store, as I don't think it would get approved since this requires usage of a third-party plugin as well.

If you still come across any issues while installing, please dm @snytexx on Discord.

## Star History

<a href="https://www.star-history.com/?repos=snytex%2FAutoDeafen-Linux&type=date&legend=top-left">
 <picture>
   <source media="(prefers-color-scheme: dark)" srcset="https://api.star-history.com/chart?repos=snytex/AutoDeafen-Linux&type=date&theme=dark&legend=top-left" />
   <source media="(prefers-color-scheme: light)" srcset="https://api.star-history.com/chart?repos=snytex/AutoDeafen-Linux&type=date&legend=top-left" />
   <img alt="Star History Chart" src="https://api.star-history.com/chart?repos=snytex/AutoDeafen-Linux&type=date&legend=top-left" />
 </picture>
</a>
