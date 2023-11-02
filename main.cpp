#include <iostream>
#include "func.h"

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isPositive(num)) {
        std::cout << "The number is positive." << std::endl;
    }
    else {
        std::cout << "The number is not positive (negative or zero)." << std::endl;
    }

    return 0;
}