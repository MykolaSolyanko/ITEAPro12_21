#include <iostream>

int main() {
    int number{};
    int reverse_number{};
    std::cout << "Insert the number: ";
    std::cin >> number;
    while (number>0) {
        reverse_number = reverse_number * 10 + number % 10;
        number /= 10;
    }
    std::cout << "Reverse number: " << reverse_number << std::endl;

    return 0;
}