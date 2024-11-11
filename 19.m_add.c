//matrix addition
#include <stdio.h>

int main() 
{
    int rows, cols, i, j;
    int matrix1[100][100], matrix2[100][100], sum[100][100];
    // Input dimensions of the matrix
    printf("Enter the number of rows and columns of the matrix : \n");
    scanf("%d %d", &rows, &cols);

    // Input elements of the first matrix
    printf("Enter the elements of the first matrix :\n");
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Adding the two matrices
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Showing the inputted matrices
    printf("The first matrix is : \n");
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix is : \n");
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    // Display the result
    printf("Sum of the matrices:\n");
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
