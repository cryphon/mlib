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

// simple implementation for log
double m_log(double n) {
    if (n < 0) {
        return std::numeric_limits<double>::quiet_NaN(); // NaN for negative input
    }
    if (n == 0) {
        return -std::numeric_limits<double>::infinity(); // -inf for 0
    }
    if (n == 1) {
        return 0; // log(1) = 0
    }

    // Extract mantissa (m) and exponent (e) such that x = m * 2^e
    int e;
    double m = std::frexp(n, &e);

    // Use polynomial approximation on the mantissa
    double y = m - 1;
    double y2 = y * y;
    double y3 = y2 * y;
    double y4 = y3 * y;

    // Polynomial approximation (truncated Taylor series)
    double result = y - y2 / 2 + y3 / 3 - y4 / 4;

    // Add the contribution from the exponent
    result += e * std::log(2.0);

    return result;
}

