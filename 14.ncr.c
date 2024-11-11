//NCR calculation
#include <stdio.h>
int factorial(int n) 
{
    int i,fact = 1;
    for (i = 1; i <= n; i++) 
    {
        fact *= i;
    }
    return fact;
}

int main() 
{
    int n, r;
    int nCr;

    a:printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    if (r > n) 
    {
        printf("r should not be greater than n.\n");
        goto a;
    }

    nCr = factorial(n) / factorial(r) * factorial(n - r);

    printf("nCr = %d\n", nCr);

    return 0;
}