#include<stdio.h>

int main()
{
    int a[50], size;
    printf("Enter the size of array : ");
    scanf("%d", &size);

    printf("Enter the elements of array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Elements in array are : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
    
    
}
