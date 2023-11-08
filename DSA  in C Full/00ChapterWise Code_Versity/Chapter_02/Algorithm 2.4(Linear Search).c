#include<stdio.h>

int main()
{
    int N = 10;
    int DATA[10] = {2, 4, 5, 22, 1, 21, 43, 55, 67, 8};
    int ITEM = 67;

    int K = 0, LOC = -1;

    while (LOC == -1 && K <= N)
    {
        if(DATA[K] == ITEM)
        {
            LOC = K;
            break;
        }
        K++;
    }

    if (LOC == -1)
    {
        printf("%d is not in the Data.",ITEM);
    }
    else
    {
        printf("%d is present in %dth location",ITEM,LOC+1);
    }
    
    
}