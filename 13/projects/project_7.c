/*
 * Name: project_7.c
 * Purpose: Asks user for a two_digit number, then prints English word for it.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    if (num < 10 || num > 99)
    {
        printf("Not a two-digit number.\n");

        return 0;
    }


    char *special_cases[] = {"eleven", "twelve", "thirteen", 
                             "fourteen", "fifteen", "sixteen", 
                             "seventeen", "eighteen", "nineteen"};
    
    // Each sentence starts with this template.
    printf("You entered the number: ");

    if (num >= 11 && num <= 19)
    {
        printf("%s.\n", special_cases[num - 11]);

        return 0;
    }

    int first_digit = num/10;
    char *first_digit_names[] = {"ten", "twenty", "thirty", "fourty", "fifty", 
                                  "sixty", "seventy", "eighty", "ninety"}; 
    printf("%s", first_digit_names[first_digit - 1]);

    int second_digit = num%10;
    if (second_digit == 0)
    {
        printf(".\n");

        return 0;
    }

    char *second_digit_names[] = {"one", "two", "three", "four", "five", 
                                  "six", "seven", "eight", "nine"};
    printf("-%s.\n", second_digit_names[second_digit - 1]);

    return 0;
}

