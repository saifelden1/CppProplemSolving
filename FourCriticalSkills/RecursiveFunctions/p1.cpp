#include <iostream>
int power(int n, int p = 2)
{
    if (p == 0)
        return 1;
    return n * power(n, p - 1);
}   

int main()
{
    std::cout << power(3) << std::endl;    // 3^2 = 9
    std::cout << power(3, 3) << std::endl; // 3^3 = 27
    return 0;
}