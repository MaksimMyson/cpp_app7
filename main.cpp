#include <iostream>
#include "func.h"

int main() {
    int n;
    std::cout << "Enter a number to compute its factorial: ";
    std::cin >> n;

    int result = factorial(n);

    if (result == -1) {
        std::cout << "Factorial is defined only for non-negative numbers." << std::endl;
    }
    else {
        std::cout << "Factorial of " << n << " = " << result << std::endl;
    }

    return 0;
}