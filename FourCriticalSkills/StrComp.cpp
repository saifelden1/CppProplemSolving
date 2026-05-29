#include <iostream>

int main()
{

    std::string name;
    int size = 0;
    int Freq[200] = {0};

    std::cin >> name;
    size = name.length();

    for (int i = 0; i < size; i++)
    {
        Freq[name[i]]++;
    }
    for (int i = 0; i < size; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z' && Freq[name[i]] > 0)
        {
            std::cout << name[i] << " " << Freq[name[i]] << std::endl;
            Freq[name[i]] = 0;
        }
    }

    return 0;
}
