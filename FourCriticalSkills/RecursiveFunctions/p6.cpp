#include <iostream>
void sum(int b[], int size, int i = 1)
{
    if (i == size)
        return ;
    b[i] = b[i] + b[i - 1];

    sum(b, size, i + 1);
}

int main()
{
   int a[] = {1, 5, 3, 9, 2};
    int size = sizeof(a) / sizeof(a[0]);
    
    sum(a, size);

    for (int i = 0; i < size; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;


    return 0;
}