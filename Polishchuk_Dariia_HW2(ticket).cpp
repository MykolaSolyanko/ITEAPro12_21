#include <iostream>

int main() {
  int a[6];
  constexpr int min{0};
  constexpr int max{9};
  std::cout << "Введите число от " << min << " до " << max << std::endl;
  for (int i = 0; i < 6; i++) {
    
    while (true) {
      std::cin >> a[i];
      if (a[i] > min && a[i] < max) {
        break;
      }
      std::cout << "Вы ввели некорректное число. Повторите ввод!" << std::endl;
    }
    
  }

  if (a[0] + a[1] + a[2] == a[3] + a[4] + a[5]) {
    std::cout << "Ваш белетик счастливый!!!" << std::endl;
  } else {
    std::cout << "Вам повезет в следующий раз" << std::endl;
  }

  return 0;
}
