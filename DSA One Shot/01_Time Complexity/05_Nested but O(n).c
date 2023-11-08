#include<stdio.h>
int main()
{
    int n, count;
    scanf("%d",&n);

    count = 0;
    /*-------->> Ekhane jokhon n = 1 then count = 3
                            n = 2 then count = 6
                            n = 3 then count = 9
                            n = 4 thene count = 12 = 4*3 = 3*n
                        so, here O(3n)---->3*O(n)---->O(n)...
    */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            count = count + 1;
        }
        
    }
    printf("n = %d, count = %d\n",n,count);

    return 0;
}