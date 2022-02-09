#include <iostream>

int proverkaInputNumber(int num) {
  constexpr int min{100000};
  constexpr int max{999999};
  if (num < min or num > max) {
    std::cout << "Error! Enter a six-digit value \n";
    return -1;
  }
}

void biletProverka(int number) {
  const int num1{number / 100000};
  const int num2{(number / 10000) % 10};
  const int num3{(number / 1000) % 10};
  const int num4{(number / 100) % 10};
  const int num5{(number / 10) % 10};
  const int num6{number % 10};

  if ((num1 + num2 + num3) == (num4 + num5 + num6)) {
    std::cout << "congratulation! You have happy ticket! :)";
  } else {
    std::cout << "Try again! Your ticket unhappy :(";
  }
};

int main() {

  unsigned int a_input{};

  std::cout << "Enter a six-digit value \n";

  std::cin >> a_input;

  proverkaInputNumber(a_input);

  biletProverka(a_input);

  return 0;
}
