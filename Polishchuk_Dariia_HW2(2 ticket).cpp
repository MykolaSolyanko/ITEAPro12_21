#include <iostream>

int main() {
    int number{};
    int n1{};
    int n2{};
    int n3{};
    int n4{};
    int n5{};
    int n6{};

    constexpr int min{ 000001 };
    constexpr int max{ 999999 };

    while (true) {
        std::cin >> number;
        if (number >= min && number <= max) {
            break;
        }
        std::cout << "You entered an invalid number. Repeat input from " << min << " before " << max << std::endl;
    }

    n1 = number / 100000;
    n2 = (number - n1 * 100000) / 10000;
    n3 = (number - n1 * 100000 - n2 * 10000) / 1000;
    n4 = (number - n1 * 100000 - n2 * 10000 - n3 * 1000) / 100;
    n5 = (number - n1 * 100000 - n2 * 10000 - n3 * 1000 - n4 * 100) / 10;
    n6 = (number - n1 * 100000 - n2 * 10000 - n3 * 1000 - n4 * 100 - n5 * 10);

    if (n1 + n2 + n3 == n4 + n5 + n6) {
        std::cout << "Your ticket is happy!!!" << std::endl;
    }
    else {
        std::cout << "You will be lucky next time" << std::endl;
    }

    return 0;
}