#include<stdio.h>

int main()
{
    int n, result;
    scanf("%d",&n);
    result = n* (n + 1) / 2;//-------->> 3 mathematical and 1 assignment operations...So, O(1)...n er man jaihok, ei 4 tai operation hobe...
    printf("Result = %d\n",result);

    return 0;
}