#include <iostream>
int sum(int b[], int size)
{
    if (size <= 0)
        return 0;
    return b[size - 1] + sum(b, size - 1);
}

int main()
{
    int a[] = {1, 5, 3, 9, 2};
    int size = sizeof(a) / sizeof(a[0]);
    std::cout << sum(a, size) << std::endl;

    return 0;
}