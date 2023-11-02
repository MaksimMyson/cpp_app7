#include "func.h"
#include <iostream>

void printRectangle(int height, int width) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}