#include <iostream>
#include <stdio.h>

int main()
{
    double x,y,k;
    std::cin >> x >> y >> k;

    if ((x%k == 0) && (y%k == 0))
        std::cout << "Both" << std::endl;
    else if (x%k == 0)
        std::cout << "Memo" << std::endl;
    else if (y%k == 0)
        std::cout << "Momo" << std::endl;
    else
        std::cout << "No One" << std::endl;
    return 0;
}