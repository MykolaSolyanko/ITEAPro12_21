#include <iostream>

int main() {
    int number{};
    long sum{};
    int counter{};
    int average{};

    std::cout << "Insert the number: ";
    std::cin >> number;

    while (number > 0) {

        sum += number % 10;
        number = number / 10;
        counter++;
    }

    average = sum / counter;
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Average: " << average << std::endl;
    return 0;
}