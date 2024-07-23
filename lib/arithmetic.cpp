#include "arithmetic.hpp"


int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    if(b == 0) {
        throw std::invalid_argument("[error]: division by zero");
    }
    return static_cast<double>(a) / b;
}
