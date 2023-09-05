/*
    Selection sort e 1st e min ber kore then oita 1st e bosai then 1st e je silo se min er jaigai asbe ... 
    then porer gular modhe min ber kora o then same kaj repeat...

        10 5 2 8 7

---->   2 5 10 8 7
---->   2 5 10 8 7
---->   2 5 7 8 10
---->   2 5 7 8 10

*/

#include<stdio.h>

void selection_sort(int *array, int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int indexOfMin = i;
        for (int j = i+1; j < n; j++)
        {
            if(array[j]<array[indexOfMin])
            {
                indexOfMin = j;
            }
        }
        if(indexOfMin != i)
        {
            int temp;
            temp = array[i];
            array[i] = array[indexOfMin];
            array[indexOfMin] = temp;
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
    
    selection_sort(array,n);

    printf("After sorting : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    

    return 0;
}