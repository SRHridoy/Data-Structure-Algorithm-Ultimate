#include<stdio.h>
int main()
{
    int n, count;
    scanf("%d",&n);

    count = 0;
    //O(n^2)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            count = count + 1;
        }
        
    }
    
    //O(n)
    /*-------->> Overall, O(n^2 + n)---->O(n^2)
                        If, O(n! + n^3  + n) then O(n!)
                        if, O(4n^4 + 2n^3 + 4n) then O(n^4)
    */
    for (int i = 0; i < n; i++)
    {
        count = count + 1;
    }
    
    printf("Count = %d\n", count);
    return 0;
}