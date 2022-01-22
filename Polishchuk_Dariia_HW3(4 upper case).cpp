#include <algorithm>
#include <iostream>
#include <string>

int main() {
  std::string input{};
  std::getline(std::cin, input);
  std::transform(input.begin(), input.end(), input.begin(), toupper);
  std::cout << input << std::endl;
  return 0;
}
