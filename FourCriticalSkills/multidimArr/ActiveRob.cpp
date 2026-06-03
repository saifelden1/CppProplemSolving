#include <stdio.h>
#include <iostream>

int main()
{
    int row, col, times, curr_r = 0, curr_c = 0;

    std::cin >> row >> col >> times;

    while (times--)
    {
        int dir, steps;
        std::cin >> dir >> steps;

        if (dir == 1)
        {
            curr_r = (curr_r - (steps % row) + row) % row;
        }
        else if (dir == 2)
        {
            curr_c = (curr_c + steps) % col;
        }
        else if (dir == 3)
        {
            curr_r = (curr_r + steps) % row;
        }
        else if (dir == 4)
        {
            curr_c = (curr_c - (steps % col) + col) % col;
        }

        std::cout << "(" << curr_r << ", " << curr_c << ")" << std::endl;
    }

    return 0;
}