#include <iostream>

int main()
{
    int num1, num2;
    std::cin >> num1 >> num2;

    if ((num1 / 1000) % 2 == 0)
    {
        std::cout << "EVEN" << std::endl;
    }
    else
    {
        std::cout << "ODD" << std::endl;
    }

    return 0;
}