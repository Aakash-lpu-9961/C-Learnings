#include <iostream>
#include <random>

bool IsPrime(int v) {
    if (v < 2) return false;
    int divs = 0;
    for (int i = 2; i * i < v + 1 && !divs; i++) {
        if (v % i == 0) divs++;
    }
    return !divs;
}

int main() {
    std::random_device r;
    std::mt19937 engine(r());
    const int size = 20;
    const int maxValue = 64;
    int *a = new int[size];
    for (int i = 0; i < size; i++) {
        a[i] = engine() % maxValue;
    }
    std::cout << "Array:  ";
    for (int i = 0; i < size; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << "\nPrimes: ";
    for (int i = 0; i < size; i++) {
        if (IsPrime(a[i])) {
            std::cout << a[i] << " ";
        }
    }
    delete[] a;
    return 0;
}
