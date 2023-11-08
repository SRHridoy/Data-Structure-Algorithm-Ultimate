#include<stdio.h>

void linear_search(int *array, int n, int s)
{
    for (int i = 0; i < n; i++)
    {
        if(array[i]==s)
        {
            printf("%d is found at index %d",s,i);
            return;
        }
    }
    printf("%d is not found in this array !",s);
}

int main()
{
    int n;
    int array[n];

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    printf("Enter the elements : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int s;
    printf("Which number do you want to search ?  : ");
    scanf("%d", &s);

    linear_search(array,n,s);
    
    return 0;
}