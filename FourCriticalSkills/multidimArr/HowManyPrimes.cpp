#include <stdio.h>
#include <iostream>

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[100][100] = {0};
    int quiry[100][4] = {0};
    int row, col;
    int times = 0;

    std::cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    std::cin >> times;
    for (int i = 0; i < times; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cin >> quiry[i][j];
        }
    }

    for (int i = 0; i < times; i++)
    {
        int count = 0;
        int startRow = quiry[i][0];
        int startCol = quiry[i][1];
        int endRow = quiry[i][2];
        int endCol = quiry[i][3];

        for (int r = startRow; r < startRow + endRow; r++)
        {
            for (int c = startCol; c < startCol + endCol; c++)
            {
                if (isPrime(arr[r][c]))
                {
                    count++;
                }
            }
        }
        std::cout << count << std::endl;
    }
    return 0;
}