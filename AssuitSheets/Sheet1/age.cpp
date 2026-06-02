#include <iostream>

int main()
{
    float num1;
    std::cin >> num1;

    if (num1 >= 0 && num1 <= 25)
    {
        std::cout << "Interval [0,25]" << std::endl;
    }


    else if (num1 > 25 && num1 <= 50)
    {
        std::cout << "Interval (25,50]" << std::endl;
    }
    else if (num1 > 50 && num1 <= 75)    



    {
        std::cout << "Interval (50,75]" << std::endl;
    }
    else if (num1 > 75 && num1 <= 100)
    {
        std::cout << "Interval (75,100]" << std::endl;
    }
    else
    {
        std::cout << "Out of Intervals" << std::endl;
    }
    return 0;
}