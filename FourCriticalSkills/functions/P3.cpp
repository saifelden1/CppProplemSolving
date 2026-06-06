#include <iostream>
#include <string>
void mypowers (int arr[] , int len =5 , int m=2)
{
    arr[0] = 1;
    for (int i = 1 ;  i < len ; i++)
    {
        arr[i] = arr[i-1] * m;
    }
}

int main()
{
    int arr[5];
    mypowers(arr);  
    for (int i = 0 ; i < 5 ; i++)
    {
        std::cout << arr[i] << " ";
    }
   
    return 0;
}