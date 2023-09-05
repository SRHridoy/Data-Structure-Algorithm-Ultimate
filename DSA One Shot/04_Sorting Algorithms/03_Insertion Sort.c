/*
    Insertion sort:
    ekhane pass hobe 1 to n-1 orthat pass = no. of element - 2;
    Prottek pass e a[i] , item e assign korbo, then item er upojukto stan khuja lagbe then a[j] ke j+1 e rakhbko then a[j+1] holo item er upojukto sthan and setai assign kore dibo item....Ekhane amra age dore nei left er gula sorted then try kori oder moddhe jaiga khojar...
    Example : 5 4 2 3 1 
    pass01: 4 5 2 3 1
    pass02: 2 4 5 3 1
    pass03: 2 3 4 5 1
    pass04: 1 2 3 4 5 



            
*/
//Insertion sort er Best time complexity : O(n)
//Jesob khetre onekgula sort kora thake kisu elomelo sekhetre insertion sort tokhn onek efficient...
//Insertion sort er Worst time complexity : O(n^2)
//Space : O(1)
#include<stdio.h>

void insertion_sort(int *array, int n)
{
    for (int i = 1; i < n; i++)
    {
        int item = array[i];
        int j = i - 1;
        while(j>=0 && array[j]>item) 
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = item;
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
    
    insertion_sort(array,n);

    printf("After sorting : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}