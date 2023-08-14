/*
 * Name: project_10.c
 * Purpose: Converts a numerical grade into a letter grade.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    int grade;
    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100)
    {
        printf("Illegal grade.\n");
        return 0;
    }

    int first_digit = grade/10;

    printf("Letter grade: ");
    switch (first_digit)
    {
        case 10: case 9: printf("A\n"); break;
        case 8: printf("B\n"); break;
        case 7: printf("C\n"); break;
        case 6: printf("D\n"); break;
        default: printf("F\n"); break;
    }

    return 0;
}

