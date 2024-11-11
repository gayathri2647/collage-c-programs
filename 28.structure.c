#include<stdio.h>
struct student
{
    int rno;
    char name[20];
    long int fees;

}student;
int main()
{
    struct student s;

    printf("Enter student name : ");
    scanf("%s",s.name);

    printf("Enter student roll number : ");
    scanf("%d",&s.rno);

    printf("Enter student fees : ");
    scanf("%li",&s.fees);

    printf("\nHi %s\n",s.name);
    printf("Your roll number is %d\n",s.rno);
    printf("Your fees is %li",s.fees);
    return 0;
}
