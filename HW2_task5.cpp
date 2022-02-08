#include <iostream>

long long best_div{}; //лучший делитель

int division(int num) {

    for (size_t i = num; i > 0; --i) { //перебераю числа до данного

        int p = i; // переменная для работы внутри цикла

        if (num % p == 0) { // нахожу делитель

            int sum{}; //сумма цифр числа

            int max_sum{}; // макс. сумма цифр числа

            while (p) { //считаю сумму цифр числа
                sum += p % 10;
                p /= 10;
            }

            if (sum > max_sum) { //определяю макс. наилучшей делитель
                max_sum = sum;
                best_div = i;
            }
        }
    }
}

int main() {

    int a_input;

    std::cout << "Enter plus number"
              << "\n";
    std::cin >> a_input;

    if (a_input <= 0) { //проверка на положительное число
        std::cout << "Your number is negative or 0! Enter plus number"
                  << "\n";
        return -1;
    }
    division(a_input);

    std::cout << "The best divider is: " << best_div << "\n";
    return 0;
}
