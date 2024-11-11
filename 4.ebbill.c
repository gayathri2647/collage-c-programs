#include<stdio.h>
#include<string.h>

int main() {
    char name[30], type[9];
    int id, unit;
    float amt = 0;
    printf("\t\tEB BILL CALCULATION\n\n");

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your EB id: ");
    scanf("%d", &id);
    printf("Enter your type (business/home): ");
    scanf("%s", type);
    printf("Enter the unit: ");
    scanf("%d", &unit);

    if (strcmp(type, "business") == 0) 
    {
        if (unit >= 1000)
            amt = 6 * unit;
        else if (unit >= 500)
            amt = 4 * unit;
        else
            amt = 2 * unit;
    } 
    else if (strcmp(type, "home") == 0) 
    {
        if (unit > 1000)
            amt = (unit - 1000) * 11.00 + 200 * 10.00 + 200 * 9.00 + 100 * 8.00 + 100 * 6.00 + 300 * 4.50;
        else if (unit > 800)
            amt = (unit - 800) * 10.00 + 200 * 9.00 + 100 * 8.00 + 100 * 6.00 + 300 * 4.50;
        else if (unit > 600)
            amt = (unit - 600) * 9.00 + 100 * 8.00 + 100 * 6.00 + 300 * 4.50;
        else if (unit > 500)
            amt = (unit - 500) * 8.00 + 100 * 6.00 + 300 * 4.50;
        else if (unit > 400)
            amt = (unit - 400) * 6.00 + 300 * 4.50;
        else if (unit > 100)
            amt = (unit - 100) * 4.50;
    }

    printf("\nHi %s", name);
    printf("\nThe amount you have to pay is %.2f", amt);
    return 0;
}
