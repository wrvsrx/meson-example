{
  mkShell,
  meson,
  ninja,
  pkg-config,
  eigen,
  clang-tools,
}:
mkShell {
  buildInputs = [ eigen ];
  nativeBuildInputs = [
    meson
    ninja
    pkg-config

    # language server for code completion
    clang-tools
  ];
}
