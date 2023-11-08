#include<stdio.h>

int main()
{
    int a[2][3];

    printf("Enter the elements : ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    printf("The elements are : ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        
    }
    
    
}