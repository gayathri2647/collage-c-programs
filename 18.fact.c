//to find the factorial using function
#include <stdio.h>

long factorial(int num) 
{
    long i, result = 1;
    for (i = 1; i <= num; i++) 
    {
        result *= i;
    }
    return result;
}

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) 
        printf("Factorial is not defined for negative numbers.\n");
    else 
        printf("Factorial of %d is: %ld\n", num, factorial(num));

    return 0;
}
