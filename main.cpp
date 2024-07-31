#include <iostream>
#include <mlib/algebra.hpp>
#include <mlib/arithmetic.hpp>
#include <testing/test_util.hpp>

int main(void) {
    int a = 10, b = 20;

    // arithmetic
    std::cout << "[divide]: " << divide(a, b) << "\n";
    std::cout << "[modulo]: " << modulo(a, 3) << "\n";

    // algebra
    std::cout << "[factorial]: " << m_factorial(4) << "\n";
    std::cout << "[power]: " << m_power(4, 4) << "\n";
    std::cout << "[sqrt]: " << m_sqrt(b) << "\n";
    std::cout << "[abs]: " << m_abs(-b) << "\n"; 
    std::cout << "[log]: " << m_log(b) << "\n";
   
    return 0;
}



