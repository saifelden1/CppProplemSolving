#include <iostream>

int main (){

    int n, numbers[200];
    bool isIncreasing = true;
    
    std::cin >> n;
    
    for (int i = 0 ; i< n ; i++)
    {
      std::cin >> numbers[i];
    }

    for (int i = 0 ; i< n ; i++)
    {
     if (numbers[i] < numbers[i-1])
        {
          isIncreasing = false;
          break;
        }
    }
   

    
      std::cout << isIncreasing << "\n";
    return 0;
}



