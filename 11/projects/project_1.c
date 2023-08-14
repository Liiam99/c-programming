/*
 * Name: project_1.c
 * Purpose: Asks user for dollar amount and shows the smallest number of bills.
 * Author: L. Adam
 */

#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
    int amount;
    printf("Enter an amount in U.S. dollars: ");
    scanf("%i", &amount);
    
    int twenties, tens, fives, ones;
    pay_amount(amount, &twenties, &tens, &fives, &ones);

    printf("$20 bills: %d, $10 bills: %d, $5 bills %d, $1 bills: %d\n",
            twenties, tens, fives, ones);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars/20;
    dollars %= 20;

    *tens = dollars/10;
    dollars %= 10;

    *fives = dollars/5;
    dollars %= 5;

    *ones = dollars;
}

