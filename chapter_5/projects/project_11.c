/*
 * Name: project_11.c
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
    
    // Each sentence starts with this template.
    printf("You entered the number ");

    if (num >= 11 && num <= 19)
    {
        switch (num) 
        {
            case 11: printf("eleven"); break;
            case 12: printf("twelve"); break;
            case 13: printf("thirteen"); break;
            case 14: printf("fourteen"); break;
            case 15: printf("fifteen"); break;
            case 16: printf("sixteen"); break;
            case 17: printf("seventeen"); break;
            case 18: printf("eighteen"); break;
            case 19: printf("nineteen"); break;
        }

        // Early exit
        printf(".\n");
        return 0;
    }

    int first_digit = num/10;
    switch (first_digit)
    {
        case 9: printf("ninety"); break;
        case 8: printf("eighty"); break;
        case 7: printf("seventy"); break;
        case 6: printf("sixty"); break;
        case 5: printf("fifty"); break;
        case 4: printf("fourty"); break;
        case 3: printf("thirty"); break;
        case 2: printf("twenty"); break;
        case 1: printf("ten"); break;
    }

    int second_digit = num%10;
    if (second_digit == 0)
    {
        printf(".\n");
        return 0;
    }

    printf("-");

    switch (second_digit)
    {
        case 9: printf("nine"); break;
        case 8: printf("eight"); break;
        case 7: printf("seven"); break;
        case 6: printf("six"); break;
        case 5: printf("five"); break;
        case 4: printf("four"); break;
        case 3: printf("three"); break;
        case 2: printf("two"); break;
        case 1: printf("one"); break;
    }

    printf(".\n");

    return 0;
}

