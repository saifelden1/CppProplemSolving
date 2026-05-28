#include <climits>
#include <iostream>

int main()
{

    int n, numbers[200], result = 0, len;

    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> numbers[i];
    }

    for (int i = 1; i < n; i++)
    {
        if (numbers[i - 1] < numbers[i])
        {
            result += len;
            len++;
        }
        else { len = 1; }
    }

    std::cout << result + n << std::endl;
    return 0;
}

// we added +n because the first number isnot counted in the loop and we
// need to count it as well.
