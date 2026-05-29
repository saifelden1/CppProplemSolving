#include <iostream>

int main (){

    int n, numbers[200]; 
    
    bool isPland = true;
    std::cin >> n;
    
    for (int i = 0 ; i< n ; i++)
    {
      std::cin >> numbers[i];
    }

    
   
    for (int i = 1 ; i< n ; i++)
    {
      if (numbers[i] !=numbers[n-i-1]){
       isPland = false;
       break ;
      }
    }


   
      std::cout << isPland ;
    return 0;
}



