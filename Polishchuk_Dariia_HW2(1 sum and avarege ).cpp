#include <iostream>

int main() {
  size_t a_size;
  long sum;
  std::cout << "Enter the number of numbers: ";
  std::cin >> a_size;
  int a[a_size];
  for (int i = 0; i < a_size; ++i) {
    std::cout << "Insert the number: ";
    std::cin >> a[i];
  }

  for (int i = 0; i < a_size; ++i) {
    sum += a[i];
  }

  std::cout << "The sum of your numbers: " << sum << std::endl;
  float avarege = sum / a_size;
  std::cout << "Average: " << avarege << std::endl;

  return 0;
}
