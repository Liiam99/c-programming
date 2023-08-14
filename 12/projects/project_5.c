/*
 * Name: project_5.c
 * Purpose: Reverses the words in a sentence.
 * Author: L. Adam
 */

#include <stdio.h>

#define MAX_LENGTH 100

int main(void)
{
    char sentence[MAX_LENGTH], ch, term_ch;
    char *p = sentence;

    printf("Enter a sentence: ");

    // Stores the letters of the sentence.
    for (; p < sentence + MAX_LENGTH; p++)
    {
        ch = getchar();

        if (ch == '?' || ch == '.' || ch == '!')
        {
            term_ch = ch;
            break;
        }

        *p = ch;
    }

    printf("Reversal of sentence:");

    // Beginning of a word includes the space before it.
    for (char *word_end = --p; p >= sentence; p--)
    {
        if (*p == ' ' || p == sentence)
        {
            // Saves the location of the beginning of the word (the space).
            word_begin = p;

            for (; p <= word_end; p++)
            {
                putchar(*p);
            }

            putchar(' ');
            
            // The letter before the space before the current word. 
            word_end = --word_begin;
            p = word_begin;
        }
    }

    printf("%c\n", term_ch);

    return 0;
}

