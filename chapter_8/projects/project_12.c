/*
 * Name: project_12.c
 * Purpose: Computes the SCRABBLE value of a word.
 * Author: L. Adam
 */

#include <ctype.h>
#include <stdio.h>

int main(void)
{
    short value = 0;
    int scrabble_values[] = {
        1, 3, 3, 2, 1, 4,
        2, 4, 1, 8, 5, 1,
        3, 1, 1, 3, 10, 1, 
        1, 1, 1, 4, 4, 8, 
        4, 10
    };

    printf("Enter a word: ");

    char ch;
    while ((ch = getchar()) != '\n')
    {
        ch = toupper(ch);
        value += scrabble_values[ch - 'A'];

    }

    printf("Scrabble value: %hd\n", value);

    return 0;
}

