#include <iostream>

int main() {
  int number{};
  int reverse_number = 0;
  std::cout << "Введите число: ";
  std::cin >> number;
  while (number) {
    reverse_number = reverse_number * 10 + number % 10;
    number /= 10;
  }
  std::cout << "Обратное число: " << reverse_number << std::endl;

  return 0;
}