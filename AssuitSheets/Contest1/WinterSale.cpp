#include <iostream>
#include <stdio.h>

int main()
{
    double Dis, N;
    std::cin >> Dis >> N;

    std::cout << N / (1 - (Dis / 100)) << std::endl;
    return 0;
}