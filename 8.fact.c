#include <stdio.h>

int main() 
{
    int n, i;
    char choice;

    do 
    {
        int factorial = 1;

        printf("Enter a number: ");
        scanf("%d", &n);

        for(i = 1; i <= n; i++) 
        {
            factorial *= i;
        }

        printf("Factorial of %d is %d\n", n, factorial);

        printf("Do you want to calculate another factorial? (y/n): ");
        scanf(" %c", &choice);

    } while(choice == 'y' || choice == 'Y');

    return 0;
}
