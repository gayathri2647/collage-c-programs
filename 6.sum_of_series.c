#include <stdio.h>
int main() 
{
    int n, sum = 0, i;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    for(i = 1 ; i <= n; i++)
    {
        sum += i;
    }
    
    printf("Sum of the series: %d\n", sum);
    
    return 0;
}
