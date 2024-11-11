//matrix transpose
#include<stdio.h>
int main()
{
    int matrix[100][100],row,col,i,j;

    printf("Enter rows and columns of the matrix : \n");
    scanf("%d %d",&row,&col);

    printf("Enter the elements of the matrix : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("\nThe given matrix is \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nThe transpose of the given matrix is \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j< col; j++)
        {
            printf("%d\t",matrix[j][i]);
        }
        printf("\n");
    }
}