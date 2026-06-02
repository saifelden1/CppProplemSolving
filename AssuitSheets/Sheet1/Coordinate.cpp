#include <iostream>

int main()
{
    float num1, num2;
    std::cin >> num1 >> num2;

    if (num1 > 0)
    {
        if (num2 > 0)
        {
            std::cout << "Q1" << std::endl;
        }
        else if (num2 < 0)
        {
            std::cout << "Q4" << std::endl;
        }
        else
        {
            std::cout << "Eixo X" << std::endl;
        }
    }
    else if (num1 < 0)
    {
        if (num2 > 0)
        {
            std::cout << "Q2" << std::endl;
        }
        else if (num2 < 0)
        {
            std::cout << "Q3" << std::endl;
        }
        else
        {
            std::cout << "Eixo X" << std::endl;
        }
    }else
    {
        if (num2 > 0 || num2 < 0)
        {
            std::cout << "Eixo Y" << std::endl;
        }
        else
        {
            std::cout << "Origem" << std::endl;
        }
    }
    return 0;
}