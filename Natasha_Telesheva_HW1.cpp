#include <cmath>
#include <iostream>

int main() {
    const int kConst1{ 2 };
    const int kConst2{ 4 };
    const int minRange{ 2 };
    const int maxRange{ 255 };

    long double a{};
    std::cout << " Please enter numbers: a,b,c in range " << " [ " << minRange << " .. " << maxRange << " ]\n";
    std::cin >> a;
    if (a == 0) {
        std::cout << "The equation is not quadratic" << std::endl;
        return 0;
    }
    long double b{}, c{};
    std::cin >> b;
    std::cin >> c;
    if ((a < minRange) || (b < minRange) || (c < minRange) || 
        (a > maxRange) || (b > maxRange) || (c > maxRange)) {
        std::cout << "You entered an incorrect number, try entering the number again";
        return 0;
    }
    std::cout << "Your numbers:" << a << " " << b << " " << " " << c << std::endl;

    const long double d{ b * b - kConst2 * a * c };
    const long double kConst{ kConst1 * a };

    long double x1{}, x2{};
    if (d > 0) {
        x1 = ((-b) + sqrt(d)) / kConst;
        x2 = ((-b) - sqrt(d)) / kConst;
        std::cout << "x1 = " << x1 << "\n";
        std::cout << "x2 = " << x2 << "\n";
        return 0;
    }
    if (d == 0) {
        x1 = -(b / kConst);
        std::cout << "x1 = x2 = " << x1 << "\n";
        return 0;
    }
    if (d < 0) {
        std::cout << "D < 0, There are no real roots of the equation";
    }
    return 0;
}
