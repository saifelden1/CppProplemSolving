#include <iostream>

bool IsSubString(const std::string &str, const std::string &sub, int pos)
{

    if (sub.length() + pos > str.length())
    {
        return false;
    }

    for (int i = 0; i < int(sub.length()); i++)
    {
        if (str[pos + i] != sub[i])
        {
            return false;
        }
    }
    return true;
}

bool replace(const std::string &str, const std::string &sub, std::string &to, std::string &Replace)
{
    int i = 0;
    while (i < int(str.length()))
    {
        if (IsSubString(str, sub, i))
        {
            Replace += to;
            i += sub.length(); // Skip the length of the substring
        }
        else
        {
            Replace += str[i];
            i++;
        }
    }

    return std::cout << Replace << std::endl, true;
}

int main()
{
    std::string str;
    std::string sub;
    std::string to;
    std::string Replace;
    int pos;

    std::cin >> str >> sub >> to;
    std::cout << replace(str, sub, to  , Replace) << std::endl;
    return 0;
}