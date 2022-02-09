#include <iostream>

void revers(int32_t num) {

  if (num < 0) {
    std::cout << "-";
    num *= -1;
  }
  int32_t val{};
  while (num) {
    val *= 10;
    val += num % 10;
    num /= 10;
  }
  std::cout << val;
}

int main() {
  int32_t a_input{};

  std::cout << "Enter your number \n";

  std::cin >> a_input;

  revers(a_input);

  return 0;
}
