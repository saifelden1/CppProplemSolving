#include <iostream>

int main()
{
    int num1, num2;
    char operation;

    // This will read the first number, then the operator symbol, then the second number
    std::cin >> num1 >> operation >> num2;

    // Use an if/else if statement or a switch statement to perform the calculation
    if (operation == '+') {
        std::cout << num1 + num2 << std::endl;
    } else if (operation == '-') {
        std::cout << num1 - num2 << std::endl;
    } else if (operation == '*') {
        std::cout << num1 * num2 << std::endl;
    } else if (operation == '/') {
        // Just make sure you don't divide by zero!
        if (num2 != 0) {
            std::cout << num1 / num2 << std::endl;
        }
    }

    return 0;
}