//sort the given names
#include <stdio.h>
#include <string.h>

int main() 
{
    int n,i;
    char names[60][50],temp[50];

    printf("Enter the number of names: ");
    scanf("%d", &n);

    printf("Enter %d names:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%s",names[i]);
    }

    // Bubble sort
    for (int i = 0; i < n ; i++) 
    {
        for (int j = i + 1; j < n ; j++) 
        {
            if (strcmp(names[i], names[j]) > 0) 
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("\nSorted names are:\n\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%s\n", names[i]);
    }

    return 0;
}
