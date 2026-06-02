#include <iostream>

int main()
{
    int int11, int12, int21, int22;
    std::cin >> int11 >> int12 >> int21 >> int22;

    if (int21 < int12)
    {
        std::cout << int21 << " " << int12 << std::endl;
    }
    else
    {
        std::cout << "-1" << std::endl;
    }

    return 0;
}