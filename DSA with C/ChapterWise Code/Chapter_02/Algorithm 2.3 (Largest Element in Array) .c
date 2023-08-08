#include<stdio.h>

int main()
{
    int N = 10;
    int DATA [10] = {1, 3, 5 , 2, 6, 8, 9, 22, 32, 99};

    int K = 1, LOC = 1, MAX = DATA[0];
    while (K<=N)
    {
        if(MAX<DATA[K])
        {
            LOC = K;
            MAX = DATA[K];
        }
        K++;
    }

    printf("The Max Value is : %d  The Location is : %d",MAX,LOC+1);
    
}