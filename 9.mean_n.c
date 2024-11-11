#include <stdio.h>

int main() 
{
    int n, i;
    float sum = 0, mean, arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter the numbers:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    mean = sum / n;

    printf("Mean of the numbers: %.2f\n", mean);

    return 0;
}
