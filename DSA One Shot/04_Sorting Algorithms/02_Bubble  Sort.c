/*
    Bubble sort e first e 1st 2ta compare then porer 2 ta compare evabe ses pojonto cholbe...Outer loop hobe no of element - 1 ...Outer loop ekbar chola mane last theke ekata positon thik hoba...Inner loop first e n-1 bar then n-2 evabe kombe...Generally vitore loop n-i-1 bar cholbe... 

    Example : 
        10 5 2 8 7
pass01 :
        5 10 2 8 7
        5 2 10 8 7
        5 2 8 10 7
        5 2 8 7 10
pass02 :2 5 8 7 10
        2 5 8 7 10
        2 5 7 8 10
pass03 :2 5 7 8 10
        2 5 7 8 10
pass04 :2 5 7 8 10

*/

#include<stdio.h>

//Time : O(n^2), Space : O(1)
void bubble_sort(int *array, int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(array[j]>array[j+1])
            {
                int temp;
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
        
    }
    
}

int main()
{
    int n;
    int array[n];
    printf("Enter the number of elements : ");
    scanf("%d", &n);

    printf("Enter the elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    
    bubble_sort(array,n);

    printf("After sorting : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}