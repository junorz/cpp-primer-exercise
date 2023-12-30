#include <iostream>

int main() {
  int sum = 0, value = 0;
  while (std::cin >> value) {
    std::cout << "current value: " << value << std::endl;
    sum += value;
    std::cout << "current sum: " << sum << std::endl;
  }
  std::cout << "The sum is: " << sum << std::endl;
  return 0;
}