#include <iostream>
int max(int b[], int size)
{
    if (size <= 0)
        return 0;
    if (size == 1)
        return b[0];

    if (b[size - 1] > max(b, size - 1))
        return b[size - 1];
    else
        return max(b, size - 1);
}

int main()
{
    int a[] = {1, 5, 3, 9, 2};
    int size = sizeof(a) / sizeof(a[0]);
    std::cout << max(a, size) << std::endl;

    return 0;
}