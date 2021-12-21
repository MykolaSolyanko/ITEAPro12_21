#include <cmath>
#include <iostream>
using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");

  double a{};
  double b{};
  double c{};
  constexpr int min{0};
  constexpr int max{1000};

  while (true) {
    cout << "Введите значение а от " << min << " до " << max;
    cin >> a;
    if (a > min && a < max) {
      break;
    }
    cout << "Неправильный диапазон! Введите число от " << min << " до " << max
         << endl;
  }

  while (true) {
    cout << "Введите значение b от " << min << " до " << max;
    cin >> b;
    if (b > min && b < max) {
      break;
    }
    cout << "Неправильный диапазон! Введите число от " << min << " до " << max
         << endl;
  }

  while (true) {
    cout << "Введите значение c от " << min << " до " << max;
    cin >> c;
    if (c > min && c < max) {
      break;
    }
    cout << "Неправильный диапазон! Введите число от " << min << " до " << max
         << endl;
  }

  const double d{b * b - 4 * a * c}; // discriminant

  if (d >= 0) {

    long double x1{(-1 * b + sqrt(d)) / (2 * a)};
    cout << "Первый корень: " << x1 << endl;
    long double x2{(-1 * b - sqrt(d)) / (2 * a)};
    cout << "Второй корень: " << x2 << endl;
    return 0;
  }

  cout << "Корень несущественый. Дискриминант меньше 0" << endl;

  return 0;
}
