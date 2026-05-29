#include <iostream>

int main (){

    int n, numbers[200],Unique[200], x = 0    ; 
    
    std::cin >> n;
    
    for (int i = 0 ; i< n ; i++)
    {
      std::cin >> numbers[i];
    }

     Unique[x++] = numbers[0]; 
    std::cout << numbers[0] << " ";
   
    for (int i = 1 ; i< n ; i++)
    {
      if (numbers[i] !=numbers[i-1])
        {
            std::cout << numbers[i] << " ";
            Unique[x++] = numbers[i];
        }
    }
    
    std::cout <<" the array ";

     for (int i = 0 ; i< x ; i++)
    {
      std::cout << Unique[i] << " ";
    }

    return 0;
}



