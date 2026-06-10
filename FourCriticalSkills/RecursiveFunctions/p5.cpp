#include <iostream>

void inc(float b[], int size, int i = 0)
{
    if (size == 0)
        return;

    b[i] += i;
    
    inc(b, size - 1, i + 1);
}

int main()
{
    float a[] = {1.5, 5.2, 3.8, 9.0, 2.4};
    int size = sizeof(a) / sizeof(a[0]);

    inc(a, size);

    for (int i = 0; i < size; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
