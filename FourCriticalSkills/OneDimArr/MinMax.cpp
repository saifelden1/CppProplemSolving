#include <iostream>

int main (){

    int n, numbers[200], max,min , maxI, minI,temp;
    
    std::cin >> n;
    
    for (int i = 0 ; i< n ; i++)
    {
      std::cin >> numbers[i];
    }

    max = numbers[0];
    min = numbers[0];
    for (int i = 0 ; i< n ; i++)
    {
      if (numbers[i] > max)
        {
          maxI= i;
        }
      if (numbers[i] < min)
        {
          minI= i;
        }
    }
    temp = numbers[minI];
    numbers[minI] = numbers[maxI];
    numbers[maxI] = temp;
  
     for (int i = 0 ; i< n ; i++)
    {
      std::cout << numbers[i] << " ";
    }
      std::cout << "Max: " << numbers[maxI] << ", Min: " << numbers[minI] << std::endl;
    return 0;
}



