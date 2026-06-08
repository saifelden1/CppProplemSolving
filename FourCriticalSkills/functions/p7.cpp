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

bool replace(const std::string &str, const std::string &sub, int pos)
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



int main()
{
    std::string str;
    std::string sub;
    std::string rep;
    int pos;

    std::cin >> str >> sub >> pos;
    std::cout << IsSubString(str, sub, pos) << std::endl;
    return 0;
}