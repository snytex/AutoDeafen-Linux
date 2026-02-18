# Build Instructions (Geode v5 / GD 2.2081)

## Prerequisites
- Geode SDK path is set:
  - `export GEODE_SDK=/home/snytex/Projekte/Geode`
- Geode SDK binaries for Windows are installed:
  - `geode sdk install-binaries -p win`
- Geode CLI installed (`geode --version`).

## Build
From this folder (`geode-2.281-beta`):

```bash
geode build -p win
```

## Output
After a successful build, artifacts are in:
- `build-win/snytex.autodeafen.geode`
- `build-win/snytex.autodeafen.dll`

## Notes
- This project targets:
  - Geode: `5.0.0-beta.2`
  - GD (Windows): `2.2081`
- Building with raw `cmake` on Linux can fail due to host/toolchain mismatch for Windows bindings. Use `geode build -p win`.
