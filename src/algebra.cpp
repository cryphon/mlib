#include <mlib/algebra.hpp>

int factorial(int n) {
    int f = 1;
    for (int i=1; i<=n; ++i)
        f *= i;
    return f;
}

double power(double base, int exp) {
    
}
