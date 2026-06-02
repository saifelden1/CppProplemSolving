#include <iostream>

int main()
{
    int num1, num2 , num3;
    char op , eq ;
    std::cin >> num1 >> op >> num2;

    if (op == '>')
    {
        std::cout << (num1 > num2 ? "Right" : "Wrong") << "\n";
    }
    else if (op == '<')
    {
        std::cout << (num1 < num2 ? "Right" : "Wrong") << "\n";
    }
    else if (op == '=')
    {
        std::cout << (num1 == num2 ? "Right" : "Wrong") << "\n";
    }
    return 0;
}