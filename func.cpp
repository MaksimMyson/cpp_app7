#include "func.h"

bool isLuckyNumber(int number) {
   
    if (number < 100000 || number > 999999) {
        return false;
    }

   
    int firstPart = number / 1000;
    int secondPart = number % 1000;

   
    int sumFirstPart = 0;
    int sumSecondPart = 0;

    while (firstPart > 0) {
        sumFirstPart += firstPart % 10;
        firstPart /= 10;
    }

    while (secondPart > 0) {
        sumSecondPart += secondPart % 10;
        secondPart /= 10;
    }

    return sumFirstPart == sumSecondPart;
}