#include <stdio.h>

int reverse(int num) {
    int rev = 0;
    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int isAdamNumber(int num) 
{
    int rev, sq1, sq2, revsqr;
    rev = reverse(num);
    sq1 = num * num;
    sq2 = rev * rev;
    revsqr = reverse(sq2);
    if (sq1 == revsqr)
        return 0;
    else
        return 1;
}

int main() 
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (0 == isAdamNumber(num)) 
        printf("%d is an Adam number\n", num);
    else
        printf("%d is not an Adam number\n", num);
    
    return 0;
}
