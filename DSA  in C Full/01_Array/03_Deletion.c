#include<stdio.h>
// Deletion at any specific position : O(n-p)
                                    //----> (i) from Begining then i = 0...O(n)
                                    //---->(ii)from End then only size--...O(1)
                                    //---->(iii)if unsorted array then array[position-1] = array[size-1] and size--...O(1)
void DELETION(int *array, int size, int position)
{
    for (int i = position-1; i <= size-2; i++)
    {
        array[i] = array[i+1];
    }
}

int main()
{
    int a[50], size,pos;
    printf("Enter the size of array : ");
    scanf("%d", &size);

    printf("Enter the elements of array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("From what position you want to delete : ");
    scanf("%d",&pos);

        DELETION(a,size,pos);

    printf("\n After deletion : ");
    for (int i = 0; i < size-1; i++)
    {
        printf("%d ",a[i]);
    }
    
}
