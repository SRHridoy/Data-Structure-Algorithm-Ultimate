#include<stdio.h>
int main()
{
/*-------->> Ekahne amader 100 ta songkha jor naki bijor ber kora lagbe tai amra 101  ta nisi array size...So, n hoi then n+1 array size hobe ...Tai Space-Complexity = O(n)...
*/
    int n, even[101];

    for (int i = 0; i < 101; i++)
    {
        even[i] = 0;
    }

    for (int i = 0; i < 101; i+=2)
    {
        even[i] = 1;
    }

    scanf("%d", &n);

    if(even[n])
    {
        printf("%d is an even number\n",n);
    }
    else
    {
        printf("%d is an odd number\n",n);
    }
    
    
    return 0;
}