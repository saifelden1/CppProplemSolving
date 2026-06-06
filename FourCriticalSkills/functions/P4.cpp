#include <iostream>
#include <string>
bool is_prime (int num)
{
    if (num <= 1) return false; // 0 and 1 are not prime numbers
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return false; // num is divisible by a number other than 1 and itself
        }
    }
    return true; // num is prime
}

int nth_prime(int n){

    if (n <= 0) return -1; // Return -1 for invalid input
    if (n == 1) return 2; // The first prime number is 2

    for (int count = 1, num = 3; ; num += 2) // Start from 3 and check only odd numbers
    {
        if (is_prime(num))
        {
            count++;
            if (count == n)
            {
                return num; // Return the nth prime number
            }
        }
    }
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << nth_prime(n) << std::endl;
    return 0;
}