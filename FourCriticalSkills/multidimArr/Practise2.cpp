#include <stdio.h>
#include <iostream>

int main()
{
    int arr[100][100] = {0};
    int row, col;
    int r = 0, c = 0;
    std::cin >> row >> col;
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cin >> arr[i][j];
        }
    }
    sum = arr[0][0];
    while (r < row && c < col)
    {
        int right_val = (c + 1 < col) ? arr[r][c + 1] : -1;
        int down_val = (r + 1 < row) ? arr[r + 1][c] : -1;
        int diagonal_val = (r + 1 < row && c + 1 < col) ? arr[r + 1][c + 1] : -1;

        if (right_val == -1 && down_val == -1 && diagonal_val == -1)
        {
            break; // Exit the loop
        }

        // Find the largest value and update the coordinates (r, c)
        if (right_val >= down_val && right_val >= diagonal_val)
        {
            sum += right_val;
            c++; // Move Right
        }
        else if (down_val >= right_val && down_val >= diagonal_val)
        {
            sum  += down_val;
            r++; // Move Down
        }
        else
        {
            sum += diagonal_val;
            r++; // Move Diagonal
            c++;
        }
    }
    std::cout << sum << std::endl;

    return 0;
}