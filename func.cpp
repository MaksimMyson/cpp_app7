#include "func.h"
#include <iostream>

void printCard(int rank, const std::string& suit) {
    std::cout << "Card: " << rank << " of " << suit << std::endl;
}