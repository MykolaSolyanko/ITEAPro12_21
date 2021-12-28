#include iostream

int main() {
  size_t array_size {6};
  int a[array_size];
  constexpr int min{0};
  constexpr int max{9};
  stdcout  Введите число от   min   до   max  stdendl;
  for (int i = 0; i  array_size; ++i) {

    while (true) {
      stdcin  a[i];
      if (a[i]  min && a[i]  max) {
        break;
      }
      stdcout  Вы ввели некорректное число. Повторите ввод от   min   до   max  stdendl;
    }
  }

  if (a[0] + a[1] + a[2] == a[3] + a[4] + a[5]) {
    stdcout  Ваш белетик счастливый!!!  stdendl;
  } else {
    stdcout  Вам повезет в следующий раз  stdendl;
  }

  return 0;
}