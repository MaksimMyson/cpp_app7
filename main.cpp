#include <iostream>
#include "func.h"
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    int result = findMax(num1, num2);

    cout << "The maximum number between " << num1 << " and " << num2 << " is: " << result << std::endl;

    return 0;
}