#include <stdio.h>
#include <iostream>

int main()
{
    int arr[100][100] = {0};
    int comp[100][2] = {0};
    int row, col, num;
    std::cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    std::cin >> num;
    for (int i = 0; i < num; i++)
    {

        std::cin >> comp[i][0] >> comp[i][1];
    }

    for (int i = 0; i < num; i++)
    {
        int row1 = comp[i][0] - 1;
        int row2 = comp[i][1] - 1;
        bool is_smaller = true;

        for (int j = 0; j < col; j++)
        {
            if (arr[row1][j] > arr[row2][j])
            {
                is_smaller = false;
                break;
            }
        }
        if (is_smaller)
        {
            std::cout << "Yes" << std::endl;
        }
        else
        {
            std::cout << "No" << std::endl;
        }
    }

    return 0;
}