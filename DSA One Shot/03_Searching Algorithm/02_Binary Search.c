#include<stdio.h>
//O(log2basen)
void binary_search(int *array, int n, int s)
{
    int left, right, mid;
    left = 0;
    right = n - 1;

    while (left<=right)
    {
        mid = (left+right)/2;
        if(array[mid]==s)
        {
            printf("%d is found at index %d",s,mid);
            return;
        }
        else if(array[mid]<s)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    printf("%d is not found !",s);
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

    binary_search(array,n,s);

    return 0;
}