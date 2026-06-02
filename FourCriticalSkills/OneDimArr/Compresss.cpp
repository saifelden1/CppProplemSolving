#include <iostream>

int main()
{

    std::string text;
    int size = 0, number=1;

    std::cin >> text;
    size = text.length();

    for (int i = 1; i <= size; i++)
    {
        if (text[i - 1] != text[i])
        {
            std::cout << text[i - 1] << number ;
            number = 1;
            if (i != size)
            {
                std::cout << "_";
            }
        }
        else
        {
           number++;
        }
    }

    return 0;
}
