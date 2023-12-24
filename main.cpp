// main.cpp
#include <iostream>
#include "calculator.h"

int main() {
    double num1, num2;

    std::cout << "Input first number:";
    std::cin >> num1;

    std::cout << "Input second number:";
    std::cin >> num2;

    double sum = addNumbers(num1, num2);

    std::cout << "Sum:" << sum << std::endl;

    return 0;
}
