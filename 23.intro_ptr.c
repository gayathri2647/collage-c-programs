//to find the minimum of given n numbers
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n, i, min;
    int *arr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", (arr + i));
    }

    min = *arr;

    for(i = 1; i < n; i++) 
    {
        if(*(arr + i) < min) 
        {
            min = *(arr + i);
        }
    }

    printf("The minimum number is: %d\n", min);

    return 0;
}
