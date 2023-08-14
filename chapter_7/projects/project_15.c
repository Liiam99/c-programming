/*
 * Name: project_15.c
 * Purpose: Computes the factorial of a positive integer.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    int n;
    long double n_fac = 1.0; 

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        n_fac *= i;
    }

    printf("Factorial of %d: %Lf\n", n, n_fac); 

    return 0;
}
    
