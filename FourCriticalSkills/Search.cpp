#include <climits>
#include <iostream>

int main()
{

    int n, numbers[200], x, Needed[200], index[200];

    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> numbers[i];
    }

    std::cin >> x;
    for (int i = 0; i < x; i++)
    {
        std::cin >> Needed[i];
    }

    for (int i = 0; i < n; i++)
    {
        index[numbers[i]] = i;
    }

    for (int i = 0; i < x; i++)
    {
        std::cout << index[Needed[i]] << " ";
    }

    return 0;
}
