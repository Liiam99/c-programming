/*
 * Name: project_8.c
 * Purpose: Calculates remaining balance on a loan after three monthly payments.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    float loan_amount, interest_rate, monthly_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    float monthly_interest = interest_rate/12/100 + 1;
    printf("\n");

    int i;
    char ordinal_numbers[][10] = {"first", "second", "third"};
    for (i = 0; i < 3; i++)
    {
        loan_amount *= monthly_interest;
        loan_amount -= monthly_payment;

        printf("Balance remaining after %s payment: $%.2f\n", ordinal_numbers[i], loan_amount);
    }

    return 0;
}

