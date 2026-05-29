#include <iostream>

int main()
{

    std::string St  , Tname , TNum;
    int size = 0;

    Tname = "YZIMNESTODUAPWXHQFBRJKCGVL";
    TNum = "!@#$%^&*()";

    std::cin >> St;
    size = St.length();


        for (int i = 0; i < size; i++)
        {
            if (St[i]>= '0' && St[i] <= '9') std::cout << TNum[St[i]-'0'];
            else if (St[i] >= 'a' && St[i] <= 'z')  std::cout << Tname[St[i] - 'a'];
            else std::cout << St[i];
        }
    

    return 0;
}
