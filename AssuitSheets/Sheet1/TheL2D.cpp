#include <iostream>
#include <algorithm>

int main()
{
    long long   int1, int2, int3, int4, result;
    std::cin >> int1 >> int2 >> int3 >> int4;

    result = ((int1 % 100) * (int2 % 100) * (int3 % 100) * (int4 % 100)) % 100;

    if (result < 10) 
    {
        std::cout << "0" << result << std::endl;
    } 
    else 
    {
        std::cout << result << std::endl;
    }

    return 0;
}