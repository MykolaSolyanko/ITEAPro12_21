#include <iostream>

int main() {

    int number{};
    constexpr int min{ -60 };
    constexpr int max{ 90 };
    long sum{};

    std::cout << "Enter a number from " << min << " before " << max << std::endl;
    while (number >= min && number <= max) {
        std::cin >> number;

        if (number % 2 != 0) {
            sum += number;
        }
    }

    std::cout << "Sum of odd numbers: " << sum << std::endl;

    return 0;
}