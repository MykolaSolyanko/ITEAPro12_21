#include <cmath>
#include <iostream>
using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");

  double a{};
  double b{};
  double c{};
  double x1{};
  double x2{};

  for (;;) {
    cout << "Введите значение а:";
    cin >> a;
    if (a > 0 && a < 1000) {
      break;
    } else {
      cout << "Неправильный диапазон! Введите число от 1 до 1000\n";
    }
  }

  for (;;) {
    cout << "Введите значение b:";
    cin >> b;
    if (b > 0 && b < 1000) {
      break;
    } else {
      cout << "Неправильный диапазон! Введите число от 1 до 1000\n";
    }
  }

  for (;;) {
    cout << "Введите значение c:";
    cin >> c;
    if (c > 0 && c < 1000) {
      break;
    } else {
      cout << "Неправильный диапазон! Введите число от 1 до 1000\n";
    }
  }

  if ((b * b - 4 * a * c) >= 0) {
    x1 = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
    cout << "Первый корень: " << x1 << endl;
    x2 = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
    cout << "Второй корень: " << x2 << endl;
  } else {
    cout << "Корень несущественый. Дискриминант меньше 0" << endl;
  }

  return 0;
}
