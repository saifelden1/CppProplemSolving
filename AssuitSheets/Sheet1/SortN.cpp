#include <iostream>

int main()
{
    int num1, num2, num3;
    std::cin >> num1 >> num2 >> num3;

    if (num1 <= num2 && num1 <= num3)
    {
        if (num2 <= num3)
        {
            std::cout << num1 << "\n"
                      << num2 << "\n"
                      << num3 << "\n";
        }
        else
        {
            std::cout << num1 << "\n"
                      << num3 << "\n"
                      << num2 << "\n";
        }
    }
    else if (num2 <= num1 && num2 <= num3)
    {
        if (num1 <= num3)
        {
            std::cout << num2 << "\n"
                      << num1 << "\n"
                      << num3 << "\n";
        }
        else
        {
            std::cout << num2 << "\n"
                      << num3 << "\n"
                      << num1 << "\n";
        }
    }
    else
    {
        if (num1 <= num2)
        {
            std::cout << num3 << "\n"
                      << num1 << "\n"
                      << num2 << "\n";
        }
        else
        {
            std::cout << num3 << "\n"
                      << num2 << "\n"
                      << num1 << "\n";
        }
    }

    std::cout << "\n"
              << num1 << "\n"
              << num2 << "\n"
              << num3 << "\n";
    return 0;
}