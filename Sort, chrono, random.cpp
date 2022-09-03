#include <chrono>
#include <iostream>
#include <random>

constexpr int max{ 20 };

int number{};
const size_t size{ 10 };
int arr[size]{};


void FillArray(int arr[], const size_t size) {

    std::random_device rd;
    std::mt19937 marsenne(rd());

    for (int i = 0; i < size;) {
        bool already_there = false;
        int newRandomValue = marsenne() % max;

        for (int j = 0; j < i; j++) {
            if (arr[j] == newRandomValue) {
                already_there = true;
                break;
            }
        }
        if (!already_there) {
            arr[i] = newRandomValue;
            i++;
        }

    }

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}

int partitionQuicksort(int* arr, int p, const int r) {
    int x = *(arr + r);
    int i = p - 1;

    for (int j = p; j < r; j++) {
        if (*(arr + j) <= x) {
            i++;
            int tmp = *(arr + i);
            *(arr + i) = *(arr + j);
            *(arr + j) = tmp;
        }
    }
    int tmp1 = *(arr + r);
    *(arr + r) = *(arr + i + 1);
    *(arr + i + 1) = tmp1;
    return i + 1;
}

void quicksort(int* arr, int p, const int r) {
    int q {};
    if (p < r) {
        q = partitionQuicksort(arr, p, r);
        quicksort(arr, p, q - 1);
        quicksort(arr, q + 1, r);
    }
}

void bubblesort(int* arr, const size_t size) {

    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (*(arr + j) > *(arr + j + 1)) {
                int t = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = t;
            }
        }
    }
}

class Timer {
public:
    Timer() : m_beg(clock_t::now()) {}

    void reset() {
        m_beg = clock_t::now();
    }

    double elapsed() const {
        return std::chrono::duration<long double, std::micro>(clock_t::now() - m_beg).count();
    }

private:
    using clock_t = std::chrono::high_resolution_clock;
    using second_t = std::chrono::duration<long double, std::micro>;
    std::chrono::time_point<clock_t> m_beg;
};

int main() {
    
    std::cout << "Fill the array with random numbers - enter 1, if you want to enter manually - enter any number" << std::endl;
    std::cin >> number;

    if (number != 1) {
        for (int i = 0; i < size; ++i) {
            std::cout << "Enter the " << i << " element of the array from: ";
            std::cin >> arr[i];
        }
    }
    else {
        FillArray(arr, size);
    }

    Timer t;

    bubblesort(arr, size);

    std::cout << "Time taken bubblesort: " << t.elapsed() << '\n';

    Timer t2;
    quicksort(arr, 0, size - 1);

    std::cout << "Time taken quicksort: " << t2.elapsed() << '\n';

    return 0;
}
