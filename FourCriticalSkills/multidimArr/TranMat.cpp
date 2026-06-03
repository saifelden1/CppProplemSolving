#include <stdio.h>
#include <iostream>

int main()
{
    double arr[100][100] = {0};
    int size, sum1 = 0, sum2 = 0;
    std::cin >> size;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    for (int r = 0, c = 0; c < size && r < size; c++, r++)
    {
        for (int i = c; i >= 0; i--)
        {
            sum1 += arr[i][r];
        }
        for (int i = c; i < size; i++)
        {
            sum2 += arr[i][r];
        }
    }
    std::cout << " the upper tri " << sum1 << std::endl
              << "the lower tri " << sum2 << std::endl;
}