#include <iostream>

int main() {

  size_t array_size{10};
  int a[array_size];
  constexpr int min{-60};
  constexpr int max{90};
  long sum{0};

  std::cout << "Введите число от " << min << " до " << max << std::endl;

  for (int i = 0; i < array_size; ++i) {

    while (true) {
      std::cin >> a[i];
      if (a[i] > min && a[i] < max) {
        break;
      }
      std::cout << "Вы ввели некорректное число. Повторите ввод от " << min
                << " до " << max << std::endl;
    }

    if (a[i] % 2 != 0) {
      sum += a[i];
    }
  }
  std::cout << "Сумма нечетных чисел: " << sum << std::endl;

  return 0;
}
