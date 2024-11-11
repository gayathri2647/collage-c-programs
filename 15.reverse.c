// to find the reverse of the given number
#include <stdio.h>

int reverse(int num) 
{
    int rev = 0;
    while (num > 0) 
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reversed number is: %d\n", reverse(num));

    return 0;
}
