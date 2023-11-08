#include<stdio.h>

//Insertion At any specific position : 
                                //-----> if postion = Begining then i >= 0
                                //-----> if postion = End then only array[size] = num
void INSERTION(int *array, int size, int position, int num)
{
    for (int i = size-1; i >= position - 1; i--)
    {
        array[i+1] = array[i];
    }
    array[position-1] = num;
}

int main()
{
    int a[50], size,num,pos;
    printf("Enter the size of array : ");
    scanf("%d", &size);

    printf("Enter the elements of array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the data you want to insert : ");
    scanf("%d",&num);
    printf("Enter the postion where you want to insert : ");
    scanf("%d", &pos);

    printf("Before Insertion : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
    
    if(pos<=0 || pos>size+1){
        printf("Invalid Postion ");
    }
    else{
        INSERTION(a,size,pos,num);

        printf("/nAfter Insertion : ");
        for (int i = 0; i < size+1; i++)
        {
            printf("%d ", a[i]);
        }
    }
    
}
