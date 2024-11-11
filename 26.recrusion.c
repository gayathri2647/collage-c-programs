#include<stdio.h>

long fact(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    if(num < 0)
        printf("Not possible. ");
    else
        printf("Factorial of %d is %d",num,fact(num));
    
    return 0;
}