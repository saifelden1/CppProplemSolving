#include <iostream>
#include <algorithm>

int main()
{
    long long int11, int12, int21, int22;
    std::cin >> int11 >> int12 >> int21 >> int22;

    long long start = std::max(int11, int21);
    long long end = std::min(int12, int22);

    if (start <= end)
    {
        std::cout << start << " " << end << std::endl;
    }
    else
    {
        std::cout << "-1" << std::endl;
    }

    return 0;
}