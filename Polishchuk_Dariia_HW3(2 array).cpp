#include <algorithm>
#include <iostream>

constexpr int length = 5;
int array[length]{};

int show_array() {
    for (int i = 0; i < length; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    return true;
}

int main() {

    std::cout << "Array:";

    show_array();

    for (int i = 0; i < length; ++i) {
        std::cin >> array[i];

        for (int j = i; j >= 0; --j) {
            if (array[j] < array[j - 1]) {
                int tmp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = tmp;
            }
        }
        show_array();
    }
    return 0;
}
