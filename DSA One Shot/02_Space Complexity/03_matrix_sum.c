#include<stdio.h>
int main()
{
    //Space-Complexity ----->O(n^2)...
    int n = 2;
    int matrix1[2][2] = {1, 0, 2, 4};
    int matrix2[2][2] = {1, 0, 2, 4};
    int matrixSum[2][2];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrixSum[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d ",matrixSum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}