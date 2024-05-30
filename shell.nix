{
  mkShell,
  meson,
  ninja,
  pkg-config,
}:
mkShell {
  buildInputs = [ ];
  nativeBuildInputs = [
    meson
    ninja
    pkg-config
  ];
}
