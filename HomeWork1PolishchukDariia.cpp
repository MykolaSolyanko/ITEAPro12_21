#include <cmath>
#include <iostream>
using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");

  double a{};
  double b{};
  double c{};
  const int min{0};
  const int max{1000};

  while (true) {
    cout << "Введите значение а от 1 до 1000:";
    cin >> a;
    if (a > min && a < max) {
      break;
    } else {
      cout << "Неправильный диапазон! Введите число от 1 до 1000\n";
    }
  }

  while (true) {
    cout << "Введите значение b от 1 до 1000:";
    cin >> b;
    if (b > min && b < max) {
      break;
    } else {
      cout << "Неправильный диапазон! Введите число от 1 до 1000\n";
    }
  }

  while (true) {
    cout << "Введите значение c от 1 до 1000:";
    cin >> c;
    if (c > min && c < max) {
      break;
    } else {
      cout << "Неправильный диапазон! Введите число от 1 до 1000\n";
    }
  }

  const double d = b * b - 4 * a * c; //дискриминант

  if (d >= 0) {
    double x1{};
    double x2{};

    x1 = (-1 * b + sqrt(d)) / (2 * a);
    cout << "Первый корень: " << x1 << endl;
    x2 = (-1 * b - sqrt(d)) / (2 * a);
    cout << "Второй корень: " << x2 << endl;
  } else {
    cout << "Корень несущественый. Дискриминант меньше 0" << endl;
  }

  return 0;
}
