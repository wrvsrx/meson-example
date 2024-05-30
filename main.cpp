#include <Eigen/Eigen>
#include <iostream>

auto main() -> int {
  std::cout << "Hello world!" << std::endl;

  auto const a = Eigen::Vector<double, 3>{0.0, 1.0, 2.0};
  std::cout << a << std::endl;
}
