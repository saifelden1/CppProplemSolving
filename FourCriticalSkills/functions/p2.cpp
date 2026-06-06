#include <iostream>
#include <string>
void reverse(std::string &str)
{
    for (int i = str.length() - 1; i >= 0; i--)
    {
        std::cout << str[i];
    }
}

int main()
{

    std::string name;
    std::cin >> name;
     reverse(name);
    return 0;
}