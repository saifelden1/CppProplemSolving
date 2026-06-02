#include <climits>
#include <iostream>

int main()
{
    //we creat the variables here 
    int MaxSubArrL, MaxSubArrStart, MaxSubArrEnd, n, numbers[200], acc[400] = {}, sum = 0;
    for (int i = 0; i < 400; i++) acc[i] = 9999;
    //we init the acc array with a very high value so as i added many +1 it 
    //wont reach it 

    // read the array and its length
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> numbers[i];
    }

    //init the sum of diffrence zero that happen befroe the array start 

    acc[200] = -1;

    for (int i = 0; i < n; i++)
    {
        // we add + 1 and -1 for a number with each 1 and 0 detected 
        // and then we shift this summ with the array to acoutn for the neg num

        if (numbers[i] == 0)
            sum += 1;
        else
            sum -= 1;

        int shifted = sum + 200;

        if (acc[shifted] == 9999)// so it didnot apper before 
        {
            acc[shifted] = i;//we go in thiss shifted index and put the index we are at rightnow 
        } else// if we saw it befroe 
        {
            int subArrLen = i - acc[shifted];

            if (subArrLen > MaxSubArrL)
            {
                MaxSubArrL = subArrLen;
                MaxSubArrStart = acc[shifted] + 1;
                MaxSubArrEnd = i;
            }
        }
    }

    return 0;
}
