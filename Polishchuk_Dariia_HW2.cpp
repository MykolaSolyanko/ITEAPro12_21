#include <iostream>

int main() {
  int size_t;
  long sum;
  std::cout << "Введите количество чисел: ";
  std::cin >> size_t;
  int a[size_t];
  for (int i = 0; i < size_t; i++) {
    std::cout << "Введите число: ";
    std::cin >> a[i];
  }

  for (int i = 0; i < size_t; i++) {
    sum += a[i];
  }

  std::cout << "Сумма ваших чисел: " << sum << std::endl;
  float avarege = sum / size_t;
  std::cout << "Среднее арифметическое: " << avarege << std::endl;

  return 0;
}
