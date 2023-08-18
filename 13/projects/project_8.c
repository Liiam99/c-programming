/*
 * Name: project_8.c
 * Purpose: Computes the SCRABBLE value of a word.
 * Author: L. Adam
 */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAX_LEN 30

int compute_scrabble_value(const char *word);

int main(void)
{
    char word[MAX_LEN];
    printf("Enter a word: ");
    fgets(word, MAX_LEN, stdin);

    // Strips newline, credit: https://stackoverflow.com/questions/2693776/removing-trailing-newline-character-from-fgets-input
    word[strcspn(word, "\n")] = '\0';

    int value = compute_scrabble_value(word);
    printf("Scrabble value: %hd\n", value);

    return 0;
}

int compute_scrabble_value(const char *word)
{
    int value = 0;

    while (*word)
    {
        switch (toupper(*word++))
        {
            case 'Q': case 'Z':
                value += 10; 
                break;
            case 'J': case 'X':
                value += 8; 
                break;
            case 'K':
                value += 5; 
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                value += 4; 
                break;
            case 'B': case 'C': case 'M': case 'P':
                value += 3; 
                break;
            case 'D': case 'G':
                value += 2; 
                break;
            default: 
                value++; 
                break;
        }
    }

    return value;
}

