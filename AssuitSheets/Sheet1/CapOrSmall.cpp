#include <iostream>

int main()
{
    char a;

    std::cin >> a ;
    
    if (a <= 'Z' && a >= 'A')
    {
        //covert to small (add 32)
        std::cout << (char)(a + 32) << std::endl;
    }
    else if (a <= 'z' && a >= 'a')
    {
        //covert to capital (subtract 32)
        std::cout << (char)(a - 32) << std::endl;
    }

    return 0;
}