#include <Eigen/Eigen>
#include <iostream>
// some cpp 20 stuff for standard test
#include <ranges>

auto main() -> int {
  std::cout << "Hello world!" << std::endl;

  auto const a = Eigen::Vector<double, 3>{0.0, 1.0, 2.0};
  std::cout << a << std::endl;

  for (auto const i : std::views::iota(0u, 10u)) {
    std::cout << i << ' ';
  }
  std::cout << std::endl;
  return 0;
}
