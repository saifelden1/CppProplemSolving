#include <iostream>

int main()
{

    std::string St, prefix;
    int size = 0,sizeT =0 , total = 0;
    bool isPrefix = true;

    std::cin >> St;
    sizeT = St.length();

    std::cin >> prefix;
    size = prefix.length();


    int prefixIndex = size - 1; // Start from the very last letter of the 'prefix' string
    for (int i = sizeT - 1; i >= sizeT - size; i--)
    {
        // Compare the current letter of St with the current letter of prefix
        if (St[i] != prefix[prefixIndex--])
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
