#include <iostream>
#include "func.h"

int main() {
    int start, end;
    std::cout << "Enter the start of the interval: ";
    std::cin >> start;
    std::cout << "Enter the end of the interval: ";
    std::cin >> end;

    std::cout << "Perfect numbers in the interval from " << start << " to " << end << " are:" << std::endl;
    findPerfectNumbers(start, end);

    return 0;
}