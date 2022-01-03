#include <iostream>

int main() {

  size_t array_size{10};
  int a[array_size];
  constexpr int min{-60};
  constexpr int max{90};
  long sum{0};

  std::cout << "Enter a number from " << min << " before " << max << std::endl;

  for (int i = 0; i < array_size; ++i) {

    while (true) {
      std::cin >> a[i];
      if (a[i] > min && a[i] < max) {
        break;
      }
      std::cout << "You entered an invalid number. Repeat input from " << min << " before " << max << std::endl;
    }

    if (a[i] % 2 != 0) {
      sum += a[i];
    }
  }
  std::cout << "Sum of odd numbers: " << sum << std::endl;

  return 0;
}
