#include <iostream>
#include <mlib/algebra.hpp>
#include <mlib/arithmetic.hpp>
#include <testing/test_util.hpp>

int test_add() {
    int a = 10, b = 20;
    int res = add(a, b), exp = 30;
    char* description = "Add numbers one number to another";
    equals(description, res, exp);
    return 0;
}

int test_sub() {
    int a = 10, b = 20;
    int res = sub(b, a), exp = 10;
    char* description = "Substract a number from another";
    equals(description, res, exp);   
    return 0;
}

int test_mul() {
    int a = 10, b = 20;
    int res = multiply(a, b), exp = 200;
    char* description = "Multiply a number with another";
    equals(description, res, exp);
    return 0;
}

int test_div() {
   int a = 10, b = 20;
   double res = divide(a, b), exp = 0.5;
   char* description = "Divide one number by another";
   equals(description, res, exp);
   return 0;
}


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

    test_add();
    test_sub();
    test_mul();
    test_div();
    return 0;
}



