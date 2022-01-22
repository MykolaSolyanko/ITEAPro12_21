#include <algorithm>
#include <iostream>
#include <string>

int main() {
  std::string input{};
  std::cout << "Input string to reverse:" << std ::endl;
  std::getline(std::cin, input);
  reverse(input.begin(), input.end());
  std ::cout << "Reverced string: " << std::endl << input << std::endl;
  return 0;
}