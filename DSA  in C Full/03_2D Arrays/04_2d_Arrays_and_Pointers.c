#include<stdio.h>

int main()
{
    int a[3][3] = {6, 2, 5, 0, 1, 3, 4, 9, 8};
    int *p;
    int *q;

    //p = a;//Invalid...Because a is the pointer to int array...

    //printf("%p\n",p);

    p = &a[0][0];//Valid

    q = a[0];//Valid because we know that array name always return the pointer to it's 1st variable...
    
    printf("%p\n",p);// Return the address of a[0][0]
    printf("%p\n",q);

    //p = a[0][0];//Invalid
    
    printf("%p\n",a);// Prints the address of a[0][0]
    printf("%p\n",&a[0][0]); //same
    printf("%p\n",&a);//same

    printf("%p\n", *a); //Because a is the pointer to int array...and by dereferncing it we get 
    //value at a means address of it's first element...
    printf("%p\n", a[0]);// same.

    printf("%p\n", a+1);//2nd array's base address
    printf("%p\n",&a[1]);//same
    printf("%p\n",*(a+1));//same
    printf("%p\n",a[1]);//same
    printf("%p\n",&a[1][0]);//same
    

    printf("%d\n", **a);// 6
    //printf("%d\n", **p); Error ...Because *p = 6 so **p invalid...

}