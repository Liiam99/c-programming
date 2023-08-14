/*
 * Name: project_9.c
 * Purpose: Calculates remaining balance on a loan after monthly payments.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    float loan_amount;
    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);

    float interest_rate;
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    float monthly_payment;
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    int number_of_payments;
    printf("Enter number of payments: ");
    scanf("%d", &number_of_payments);

    float monthly_interest = interest_rate/12/100 + 1;
    printf("\n");

    for (int i = 0; i < number_of_payments; i++)
    {
        loan_amount *= monthly_interest;
        loan_amount -= monthly_payment;

        printf("Balance remaining after %d payment: $%.2f\n", i, loan_amount);
    }

    return 0;
}

