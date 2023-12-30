#include <iostream>

int main() {
  int sum = 0;
  int start = 50;
  while (start <= 100) {
    sum += start++;
  }
  std::cout << "Result is: " << sum << std::endl;

  return 0;
}