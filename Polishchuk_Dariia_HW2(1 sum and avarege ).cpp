#include <iostream>

int main() {
  size_t a_size;
  long sum;
  std::cout << "Введите количество чисел: ";
  std::cin >> a_size;
  int a[a_size];
  for (int i = 0; i < a_size; ++i) {
    std::cout << "Введите число: ";
    std::cin >> a[i];
  }

  for (int i = 0; i < a_size; ++i) {
    sum += a[i];
  }

  std::cout << "Сумма ваших чисел: " << sum << std::endl;
  float avarege = sum / a_size;
  std::cout << "Среднее арифметическое: " << avarege << std::endl;

  return 0;
}