/*
 * Name: project_7.c
 * Purpose: Asks user for dollar amount and shows the smallest number of bills.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    int amount;

    printf("Enter an amount in U.S. dollars: ");
    scanf("%i", &amount);
    printf("\n");

    int bill_types[] = {20, 10, 5, 1};

    int i;
    int bill_type;
    for (i = 0; i < 4; i++)
    {
        bill_type = bill_types[i];
        printf("$%i bills: %i\n", bill_type, amount/bill_type);
        amount = amount%bill_type;
    }
    
    return 0;
}

