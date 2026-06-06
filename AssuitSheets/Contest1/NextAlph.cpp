#include <iostream>
#include <stdio.h>

int main()
{
    // the module doesn't work with flaot or double
    char Letter;
    std::cin >> Letter;

    if (Letter != 'z')
        std::cout << (char)(Letter + 1) << std::endl;
    else
        std::cout << 'a' << std::endl;
    return 0;
}