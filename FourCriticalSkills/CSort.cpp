#include <iostream>

int main (){

    int n, Freq[200]  = {0}, numbers[200];
    
    std::cin >> n;
    
    for (int i = 0 ; i< n ; i++)
    {
      std::cin >> numbers[i];
    }

    for (int i = 0 ; i< n ; i++)
    {
        Freq[numbers[i]]++;
    }
   
       
    for (int i = 0 ; i< n ; i++)
    {
        while (Freq[numbers[i]] > 0)
        {
            std::cout << numbers[i] << " ";
            Freq[numbers[i]]--;
        }
       
    }

    
    return 0;
}



