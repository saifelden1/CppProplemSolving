#include <iostream>

int main()
{

    std::string St, prefix;
    int size = 0;
    bool isPrefix = true;

    std::cin >> St;

    std::cin >> prefix;
    size = prefix.length();

    for (int i = 0; i < size; i++)
    {
        if (St[i] != prefix[i])
        {
            isPrefix = false;
            break;
        }
            
    }

    if (isPrefix)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;

    return 0;
}
