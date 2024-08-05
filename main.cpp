#include <iostream>
#include <mlib/algebra.hpp>
#include <mlib/arithmetic.hpp>
#include <testing/test_util.hpp>

int main(void) {
    
    double result;

    // Test m_factorial with value that might overflow
    result = m_factorial(20);
    std::cout << "Factorial: " << result << std::endl;

    // Test m_power with large exponents
    result = m_power(2.0, 10); // Large exponents
    std::cout << "Power: " << result << std::endl;

    // Test m_sqrt
    result = m_sqrt(16.0);
    std::cout << "Square root: " << result << std::endl;

    // base 2
    result = m_log(10.0, 2.0);
    std::cout << "Logarithm (base 2): " << result << std::endl;

    // base 10
    result = m_log(10.0, 10.0);
    std::cout << "Logarithm (base 10): " << result << std::endl;

    // base 1
    result = m_log(10.0, 0.0); // invalid base(1)
    std::cout << "Logarithm (base 1): " << result << std::endl;

    // base 0
    result = m_log(10.0, 0.0); // invalid base(0)
    std::cout << "Logarithm (base 0): " << result << std::endl;

    result = m_gcd(10, 15);
    std::cout << "GCD (10, 15): " << result << std::endl;

    result = m_lcm(19, 21);
    std::cout << "LCM (19, 21): " << result << std::endl;

    return 0;
}



