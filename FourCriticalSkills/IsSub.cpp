#include <iostream>

int main()
{

    std::string St, prefix;
    int size = 0,sizeT =0 , total = 0;
    bool isSubstring = false;

    std::cin >> St;
    sizeT = St.length();

    std::cin >> prefix;
    size = prefix.length();

   
    for (int i = 0; i <= sizeT - size + 1; i++)
    {
        bool isMatch = true;

        for (int j = 0; j < size; j++)
        {
            if (St[i + j] != prefix[j])
            {
                isMatch = false; 
                break;
            }
        }

        
        if (isMatch)
        {
            isSubstring = true;
            break;
        }
    }

    if (isSubstring)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;

    return 0;
}
