#include <iostream>
#include <cmath>

int main()
{
    long long A, B, C, D;
    std::cin >> A >> B >> C >> D;

    // Using logarithms: B * log(A) > D * log(C)
    if (B * log(A) > D * log(C))
    {
        std::cout << "YES" << std::endl;
    }
    else 
    {
        std::cout << "NO" << std::endl;
    }
   
    return 0;
}