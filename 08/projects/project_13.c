/*
 * Name: project_13.c
 * Purpose: Displays the given full name in {surname, first initial.} format.
 * Author: L. Adam
 */

#include <stdio.h>

#define MAX_LENGTH 20

int main(void)
{
    printf("Enter a first and last name: ");
    char first_initial = getchar();

    // Skips the rest of first name.
    while (getchar() != ' ')
        ;

    char surname[MAX_LENGTH]; 
    char surname_letter;
    int letter_idx = 0;

    while ((surname_letter = getchar()) != '\n' && letter_idx != MAX_LENGTH)
    {
        surname[letter_idx] = surname_letter;
        letter_idx++;
    }

    printf("You entered the name: ");
    
    for (int i = 0; i < letter_idx; i++)
    {
        putchar(surname[i]);
    }

    printf(", %c.\n", first_initial);
        
    return 0;
}

