#include <iostream>

float average(float b[], int size, int i = 0, float sum = 0)
{
    if (i == size)
        return sum / size;

    return average(b, size, i + 1, sum + b[i]);
}

int main()
{
    float a[] = {1.5, 5.2, 3.8, 9.0, 2.4};
    int size = sizeof(a) / sizeof(a[0]);

    std::cout << average(a, size) << std::endl;

    return 0;
}