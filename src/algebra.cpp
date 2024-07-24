#include <mlib/algebra.hpp>

int factorial(int n) {
    int f = 1;
    for (int i=1; i<=n; ++i)
        f *= i;
    return f;
}

// Exponation by squaring
double power(double base, int exp) {
    if(exp == 0) return 1;
    if(exp == 1) return base;

    double half = power(base, exp /2);

    if(exp % 2 == 0) {
        return half * half;
    }
    return half * half * base;
}
