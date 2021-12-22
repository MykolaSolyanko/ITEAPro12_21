#include <iostream>

int main() {
  int N;
  long sum;
  std::cout << "Введите количество чисел: ";
  std::cin >> N;
  int a[N];
  for (int i = 0; i < N; i++) {
    std::cout << "Введите число: ";
    std::cin >> a[i];
  }

  for (int i = 0; i < N; i++) {
    sum += a[i];
  }

  std::cout << "Сумма ваших чисел: " << sum << std::endl;
  float avarege = sum / N;
  std::cout << "Среднее арифметическое: " << avarege << std::endl;

  return 0;
}
