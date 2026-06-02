#include <iostream>

int main (){
    int n , numbers[200];
    std::cin >> n;
    for (int i = 0 ; i< n ; i++){
      std::cin >> numbers[i];
    }
    for (int i = 0 ; i < n/2 ; i++){
      int temp = numbers[i];
      numbers[i] = numbers[n-1-i];
      numbers[n-1-i] = temp;
    }

    for (int i = 0 ; i< n ; i++){
      std::cout << numbers[i] << " ";
    }
return 0;
}



