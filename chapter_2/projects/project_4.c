/*
 * Name: project_4.c
 * Purpose: Asks user for an amount and displays amount with 5% tax added.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    float amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    printf("With tax added: $%.2f\n", amount*1.05);

    return 0;
}

