#include<stdio.h>
int main()
{
    int n, count;
    scanf("%d", &n);

    count = 0;
    //Ekhane n = 1 hole 1, 2 hole 4, 3 hole 9, 10 hole 100...So, count = n^2...So, O(n^2)...
    //Erokom tokhn e hoi jokhn ekta loop er vitor arekta loop thake ebong 2 tai o to n pojonto chole ba n er somanupatic then eta O(n^2);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            count = count + 1;
        }
        
    }
    printf("n = %d, count = %d\n",n,count);
    return 0;
}