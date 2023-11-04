#include "func.h"
#include <iostream>

bool isPerfect(int num) {
    int sum = 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            if (i * i == num) {
                sum += i;
            }
            else {
                sum += i + num / i;
            }
        }
    }
    return sum == num;
}

void findPerfectNumbers(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (isPerfect(i)) {
            std::cout << i << " is a perfect number." << std::endl;
        }
    }
}