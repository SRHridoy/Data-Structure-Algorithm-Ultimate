#include<stdio.h>
#include<math.h>

int main()
{
    int A, B, C, D;
    printf("Enter the value of A, B and C :");
    scanf("%d %d %d",&A, &B, &C);

    D = B*B - 4*A*C;

    int X1, X2;
    if(D>0)
    {
        X1 = (-B-pow(D,(1/2)))/2*A;
        X2 = (-B+pow(D,(1/2)))/2*A;
        printf("The Solution is X1 = %d and X2 = %d",X1, X2);
    }
    else if (D==0)
    {
        X1 = -B/2*A;
        printf("The Unique Solution is  %d", X1);
    }
    else
    {
        printf("There is no real solutions.");
    }
    
    return 0;
}