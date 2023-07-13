#include <stdio.h>

int main()
{
    int r1, r2, c1, c2;
    printf("Enter no of rows of matrix 1: ");
    scanf("%d", &r1);
    printf("Enter no of rows of matrix 2: ");
    scanf("%d", &r2);
    printf("Enter no of Columns of matrix 1: ");
    scanf("%d", &c1);
    printf("Enter no of Columns of matrix 2: ");
    scanf("%d", &c2);

    if (c2 != r1)
    {
        printf("Matrix Multiplication not possible!");
        return 0;
    }

    int mat1[r1][c1], mat2[r2][c2], result[r1][c2];
    int i, j, k;

    printf("Enter Elements for MAtrix 1: ");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter Elements for MAtrix 2: ");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &mat2[i][j]);

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < r2; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Resultant Matrix : \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}
