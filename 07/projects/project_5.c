/*
 * Name: project_5.c
 * Purpose: Computes the SCRABBLE value of a word.
 * Author: L. Adam
 */

#include <ctype.h>
#include <stdio.h>

int main(void)
{
    short value = 0;
    char ch;

    printf("Enter a word: ");

    while ((ch = getchar()) != '\n')
    {
        ch = toupper(ch);

        switch (ch)
        {
            case 'Q': case 'Z':
                value += 10; break;
            case 'J': case 'X':
                value += 8; break;
            case 'K':
                value += 5; break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                value += 4; break;
            case 'B': case 'C': case 'M': case 'P':
                value += 3; break;
            case 'D': case 'G':
                value += 2; break;
            default: value++; break;
        }
    }

    printf("Scrabble value: %hd\n", value);

    return 0;
}

