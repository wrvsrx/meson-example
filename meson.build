# 'meson-example' is the project name
# 'cpp' is the language used in this project
project(
  'meson-example',
  'cpp',
  default_options: ['cpp_std=c++20'],
)

# search for eigen as dependency
eigen = dependency('eigen3')

executable(
  # execuatable name
  'main',
  # source files
  'main.cpp',
  # dependencies
  dependencies: [eigen],
)
