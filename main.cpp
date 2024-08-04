#include <iostream>
#include <mlib/algebra.hpp>
#include <mlib/arithmetic.hpp>
#include <testing/test_util.hpp>

int main(void) {
    int a = 10, b = 20;    // algebra
    std::cout << "[factorial]: " << m_factorial(4) << "\n";
    std::cout << "[power]: " << m_power(4, 4) << "\n";
    std::cout << "[sqrt]: " << m_sqrt(b) << std::endl;
    std::cout << "[abs]: " << m_abs(-b) << std::endl; 
    std::cout << "[log1]: " << m_log(b) << std::endl;
    std::cout << "[log2]: " << m_log(b, 2) << std::endl;
    //std::cout << "[exp]: " << m_exp(1) << std::endl;
    return 0;
}



