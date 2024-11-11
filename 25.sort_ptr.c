//sorting numbers with pointers
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr,temp,i,j;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    
    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) 
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d numbers: \n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", (arr+i));
    }

    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (*(arr + j) < *(arr + i)) 
            {
    
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }

    printf("\nSorted numbers: \n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", *(arr + i));
    }
    return 0;
}