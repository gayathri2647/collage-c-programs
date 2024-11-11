//to check the given numbers are Armstrong or not
#include<stdio.h>
#include<math.h>
int count(int no) {
    int count = 0;
    //to count the numbers
    while (no != 0)
    {
        no /= 10;
        count++;
    }

    return count;
}
int armstrong(int no)
{
    int i,rem,ans=0; 
    int c = count(no);

    //to find the armstrong number
    for (i = 0; i < c; i++) {
        rem = no % 10;
        ans = ans + pow(rem, c);
        no /= 10;
    }
    return ans;
}
int main()
{
    int no;
    printf ("Enter a number :");
    scanf("%d",&no);

    if (armstrong(no) == no)
      printf("\nThe given number is an armstrong number.\n");
    else
      printf("\nThe given number is not an armstrong number.\n");
    return 0;
}