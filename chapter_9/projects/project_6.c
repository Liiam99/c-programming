/*
 * Name: project_6.c
 * Purpose: Calculates value of polynomial 3x5 + 2x4 - 5x3 - x2 + 7x - 6
 * Author: L. Adam
 */

#include <stdio.h>

int calculate_polynomial(int x);
int power(int x, int n);

int main(void)
{
    int x;
    printf("Enter value for x in 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6: ");
    scanf("%d", &x);

    int polynomial = calculate_polynomial(x);
    printf("Result: %d\n", polynomial);

    return 0;
}

int calculate_polynomial(int x)
{
   return 3*power(x, 5) + 2*power(x, 4) - 5*power(x, 3) - power(x, 2) + 7*x - 6;
}

int power(int x, int n)
{
    return n == 0 ? 1 : x*power(x, n - 1);
}

