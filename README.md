# Meson Example

## Build

Requirement: install `nix`, `direnv` and `nix-direnv`.

```bash
direnv allow
# setup `build` as the build directory
meson setup build
# compile the project in `build`
meson compile -C build
```
