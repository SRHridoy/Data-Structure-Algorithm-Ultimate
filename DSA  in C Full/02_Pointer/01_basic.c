#include<stdio.h>

int main()
{
    int b = 10;

    int *p;
    p = &b;
    //p = b;  In valid

    int a[4] = {1,3,4,5};
    int *q;
    q = &a;//Warning but not error....
    q = a; //Valid
    printf("%p\n",q);
    printf("%p\n",a);
    printf("%p\n",&a);//all same...
    printf("%d\n",a[3]);//5
    printf("%d\n",3[a]);//5
    printf("%d\n",3[q]);//5
    printf("%d\n",q[3]);//5
    printf("%d\n",sizeof(a));
    printf("%p\n",a+1);
    printf("%p\n",&a[0] + 1);
    printf("%p\n",&a+1);
    printf("%p\n",&a[3]);
    printf("%d\n",*a);
    printf("%d\n",*a+1);
    printf("%d\n",*(a+1));

    printf("%d\n",b);//10
    printf("%d\n",*p);//10

    printf("%p\n",&b);
    printf("%p\n",p);//same as above
    //printf("%d\n",p-q);

}