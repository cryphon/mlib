#include <iostream>
#include "arithmetic.hpp"
#include "algebra.hpp"

int main(void) {
    int a = 10, b = 20;

    // arithmetic
    std::cout << "[add]: " << add(a, b) << "\n";
    std::cout << "[substract]: " << sub(a, b) << "\n";
    std::cout << "multiply]: " << multiply(a, b) << "\n";
    std::cout << "[divide]: " << divide(a, b) << "\n";
    std::cout << "[modulo]: " << modulo(a, 3) << "\n";

    // algebra
    std::cout << "[factorial]: " << factorial(4) << "\n";
    return 0;
}
