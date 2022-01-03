#include <iostream>

int main() {
  int height{};

  std::cout << "Enter the height of the tree: ";
  std::cin >> height;

  for (int i = 0; i < height; i++) {
    for (int j = 1; j < height - i; j++) {
      std::cout << ' ';
    }

    for (int j = height - 2 * i; j <= height; j++) {
      std::cout << '*';
    }
    std::cout << std::endl;
  }
  return 0;
}
