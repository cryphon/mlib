#include <mlib/algebra.hpp>
#include <cmath>
int m_factorial(int n) {
    int f = 1;
    for (int i=1; i<=n; ++i)
        f *= i;
    return f;
}

// Exponation by squaring
double m_power(double base, int exp) {
    if(exp == 0) return 1;
    if(exp == 1) return base;

    double half = m_power(base, exp /2);

    if(exp % 2 == 0) {
        return half * half;
    }
    return half * half * base;
}

// Newton-Raphson method
double m_sqrt(double n) {
    if (n < 0) return std::nan("");
    if (n == 0) return 0;

    double y = n;
    double epsilon = 1e-10;  // Desired precision
    while (true) {
        double y_next = 0.5 * (y + n / y);
        if (std::abs(y - y_next) < epsilon) break;
        y = y_next;
    }
    return y;
}

double m_abs(double n) {
    if(n < 0) return -n;
    return n;
}

