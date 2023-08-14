/*
 * Name: project_7.c
 * Purpose: Calculates value of given expression of two given fractions.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    char operator;
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter two fractions seperated by a mathematical operator: ");
    scanf("%d/%d%c%d/%d", &num1, &denom1, &operator, &num2, &denom2);

    switch (operator)
    {
        case '+':
            result_num = num1*denom2 + num2*denom1;
            result_denom = denom1*denom2;
            break;
        case '-':
            result_num = num1*denom2 - num2*denom1;
            result_denom = denom1*denom2;
            break;
        case '*':
            result_num = num1*num2;
            result_denom = denom1*denom2; 
            break;
        case '/':
            result_num = num1*denom2;
            result_denom = denom1*num2;
            break;
    }
    
    // Bonus: calculates the GCD to reduce the fractons to lowest terms.
    int m = result_num, n = result_denom, remainder;
    while (n != 0)
    {
        remainder = m%n;
        m = n;
        n = remainder;
    }

    printf("The result is %d/%d\n", result_num/m, result_denom/m);

    return 0;
}

