#include <iostream>
#include "func.h"

int main() {
    int num;
    std::cout << "Enter a number to check for primality: ";
    std::cin >> num;

    if (isPrime(num)) {
        std::cout << num << " is a prime number." << std::endl;
    }
    else {
        std::cout << num << " is not a prime number." << std::endl;
    }

    return 0;
}