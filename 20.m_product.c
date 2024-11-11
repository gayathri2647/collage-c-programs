//matrix multiplication 
#include<stdio.h>

void main()
{
    int r1,c1,r2,c2,i,j,k;

    int matrix1[100][100], matrix2[100][100], ans[100][100];

    // Input dimensions of matrix
    a:printf("Enter rows and columns of first matrix : \n");
    scanf("%d %d",&r1,&c1);
    
    printf("Enter rows and columns of second matrix : \n");
    scanf("%d %d",&r2,&c2);

    // Verifying whether the conditions for matrix multiplication are satisfied.
    if (c1 != r2)
    {
        printf("Matrix multiplication is not possible.\n");
        goto a;
    }

    // Input matrix 1
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    // Input matrix 2
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    // Displaying matrices.
    printf("The first matrix is : \n");
    for (i = 0; i < r1; i++) 
     {
        for (j = 0; j < c1; j++) 
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix is : \n");
    for (i = 0; i < r2; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    // Multiplying the matrices.
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            ans[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
                ans[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the resultant matrix.
    printf("The resultant matrix : \n");
     for (i = 0; i < r1; i++) 
     {
        for (j = 0; j < c2; j++) 
        {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }

}