#include <iostream>
#include <climits>

int main()
{

    int n, numbers[200], Unique[200], min1, min2, min3;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> numbers[i];
    }

    min1 = INT_MAX;
    min2 = INT_MAX;
    min3 = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (numbers[i] < min1)
        {
            min3 = min2;
            min2 = min1;
            min1 = numbers[i];
        } 
        else if (numbers[i] < min2 && numbers[i] != min1)
        {
            min3 = min2;
            min2 = numbers[i];
        } 
        else if (numbers[i] < min3 && numbers[i] != min2 && numbers[i] != min1)
        {
            min3 = numbers[i];
        }
    }
    std::cout << "The three smallest numbers are: " << min1 << ", " << min2 << ", " << min3 << std::endl;   

    return 0;
}
