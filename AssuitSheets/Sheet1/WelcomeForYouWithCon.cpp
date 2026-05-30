#include <iostream>

int main()
{
    int a=0 ,b=0;

    std::cin >> a >> b;
    if (a >= b)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;
    
    return 0;
}
