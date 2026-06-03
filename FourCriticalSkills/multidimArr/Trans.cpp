#include <stdio.h>
#include <iostream>

int main()
{
    double arr[100][100] = {0};
    double Tarr[100][100] = {0};
    int row , col ;
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
            Tarr[j][i] = arr[i][j];
        }
    }
    
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            std::cout << Tarr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}