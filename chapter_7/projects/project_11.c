/*
 * Name: project_11.c
 * Purpose: Displays the given full name in {surname, first initial.} format.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    printf("Enter a first and last name: ");
    char first_initial = getchar();

    // Skips the rest of first name.
    while (getchar() != ' ')
        ;

    char surname_letter; 
    while ((surname_letter = getchar()) != '\n')
    {
        putchar(surname_letter);
    }

    printf(", %c.\n", first_initial);
        
    return 0;
}

