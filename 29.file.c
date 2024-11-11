// stufile.c
// Prg to store and retrieve student data to and from a file
#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
   int rno;
   char sname[40];
   int m1, m2, m3;
   int total;
   float per;
} student;

void store()
{
   FILE *fp;
   student s1;
   fp = fopen("stud5.txt", "ab");

   if (fp == NULL)
   {
      printf("Error opening file!\n");
      return;
   }

   printf("Enter roll no  :  ");
   scanf("%d", &s1.rno);
   printf("Enter name     :  ");
   scanf("%s", s1.sname);
   printf("Enter 3 subject marks   :  ");
   scanf("%d %d %d", &s1.m1, &s1.m2, &s1.m3);
   s1.total = s1.m1 + s1.m2 + s1.m3;
   s1.per = s1.total / 3.0;

   fwrite(&s1, sizeof(student), 1, fp);

   fclose(fp);
}

void display()
{
   FILE *fp;
   student s1;
   fp = fopen("stud5.txt", "rb");

   if (fp == NULL)
   {
      printf("Can't open the file\n");
      return;
   }

   printf("Roll No    Name   Total     Percentage   \n");
   
   while (fread(&s1, sizeof(student), 1, fp))
   {
      printf("%d  \t%s    \t%d\t%.2f\n", s1.rno, s1.sname, s1.total, s1.per);
   }

   fclose(fp);
}

int main()
{
   int ch;

   do
   {
      printf("1. Store the student data\n");
      printf("2. Retrieve the student data\n");
      printf("0. Exit\n");
      printf("Enter your choice: ");
      scanf("%d", &ch);

      switch (ch)
      {
      case 1:
         store();
         break;
      case 2:
         display();
         break;
      case 0:
         exit(0);
         break;
      default:
         printf("Wrong choice\n");
         break;
      }
   } while (ch != 0);

   return 0;
}