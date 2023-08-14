/*
 * Name: project_3.c
 * Purpose: Asks user for fraction, then reduces it to lowest terms.
 * Author: L. Adam
 */

#include <stdio.h>

int calc_gcd(int m, int n);
void reduce(int numerator, int denominator, 
            int *reduced_numerator, int *reduced_denominator);

int main(void)
{
    int num, denom;
    printf("Enter a fraction (i/i): ");
    scanf("%d/%d", &num, &denom);

    int num_lowest_term, denom_lowest_term;    
    reduce(num, denom, &num_lowest_term, &denom_lowest_term);

    printf("In lowest terms: %d/%d\n", num_lowest_term, denom_lowest_term);

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

void reduce(int numerator, int denominator,
            int *reduced_numerator, int *reduced_denominator)
{
    int gcd = calc_gcd(numerator, denominator);
    *reduced_numerator = numerator/gcd;
    *reduced_denominator = denominator/gcd;
} 

