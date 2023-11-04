#include "func.h"
using namespace std;

double power(double base, int exponent) {
    if (exponent == 0) {
        return 1.0;
    }
    else if (exponent > 0) {
        double result = 1.0;
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
        return result;
    }
    else {
        double result = 1.0;
        for (int i = 0; i < -exponent; i++) {
            result /= base;
        }
        return result;
    }
}