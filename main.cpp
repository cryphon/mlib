#include <iostream>
#include "arithmetic.hpp"

int main(void) {
    int a = 10, b = 20;

    std::cout << add(a, b) << "\n";
    std::cout << sub(a, b) << "\n";
    std::cout << multiply(a, b) << "\n";
    std::cout << divide(a, b) << "\n";
    std::cout << modulo(a, 3) << "\n";
    return 0;
}
