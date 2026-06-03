#include <stdio.h>
#include <iostream>

int main()
{
    int arr[100][100] = {0};
    int positions[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
    int max[100][2] = {0};
    int row, col;
    int mountain_count = 0;

    std::cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            bool is_mountain = true;

            for (int k = 0; k < 8; k++)
            {
                int newRow = i + positions[k][0];
                int newCol = j + positions[k][1];

                if (newRow >= 0 && newRow < row && newCol >= 0 && newCol < col)
                {
                    if (arr[newRow][newCol] >= arr[i][j])
                    {
                        is_mountain = false;
                        break;
                    }
                }
            }

            if (is_mountain)
            {
                max[mountain_count][0] = i;
                max[mountain_count][1] = j;
                mountain_count++;
            }
        }
    }

    std::cout << "Total mountains: " << mountain_count << std::endl;
    for (int i = 0; i < mountain_count; i++)
    {
        std::cout << "Mountain " << i << " at: (" << max[i][0] << ", " << max[i][1] << ")" << std::endl;
    }

    return 0;
}