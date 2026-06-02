#include <iostream>

int main()
{

    int n, numbers[200], Freq[200] = {0}, temp2, mostFreqNum;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> numbers[i];
    }

    for (int i = 0; i < n; i++)
    {
        Freq[numbers[i]]++;
    }
    temp2 = Freq[numbers[0]];
    mostFreqNum = numbers[0];

    for (int i = 0; i < n; i++)
    {
        if (Freq[numbers[i]] > temp2)
        {
            temp2 = Freq[numbers[i]];
            mostFreqNum = numbers[i];
        }
    }

    std::cout << mostFreqNum << " repeated " << temp2 << " times\n";
    return 0;
}
