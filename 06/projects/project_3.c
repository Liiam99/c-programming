/*
 * Name: project_3.c
 * Purpose: Asks user for fraction, then reduces it to lowest terms.
 * Author: L. Adam
 */

#include <stdio.h>

int calc_gcd(int m, int n);

int main(void)
{
    int nom, denom;
    printf("Enter a fraction (i/i): ");
    scanf("%d/%d", &nom, &denom);
    
    int gcd = calc_gcd(nom, denom);
    int nom_lowest_term = nom/gcd;
    int denom_lowest_term = denom/gcd;

    printf("In lowest terms: %d/%d\n", nom_lowest_term, denom_lowest_term);

    return 0;
}

int calc_gcd(int m, int n)
{
    while (n != 0)
    {
        int remainder = m % n;
        m = n;
        n = remainder;
    }
    
    return m;
}

