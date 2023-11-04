#include <iostream>
#include "func.h"

int main() {
    int rank;
    std::string suit;

    std::cout << "Enter the rank of the card: ";
    std::cin >> rank;
    std::cout << "Enter the suit of the card: ";
    std::cin >> suit;

    printCard(rank, suit);

    return 0;
}