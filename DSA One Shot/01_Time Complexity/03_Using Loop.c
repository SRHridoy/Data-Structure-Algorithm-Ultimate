#include<stdio.h>
int main()
{
    int i, n, result;
    scanf("%d",&n);
    result = 0;//-------->>O(1)

    for (int i = 1; i <= n; i++)
    {
        result = result + i;//-------->> 1 to n pojonto cholbe ebong protibar 2 ta operation hobe...1 bar hole 2 , 2 bar hole 4 evabe n bar hole 2n operations ...So, Propotional...O(2n)---->2*O(n)---->O(n)....
    }
    
    printf("Result = %d\n",result);

    return 0;
}