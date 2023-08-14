/*
 * Name: project_14.c
 * Purpose: Reverses the words in a sentence.
 * Author: L. Adam
 */

#include <stdio.h>

#define MAX_LENGTH 100

int main(void)
{
    char sentence[MAX_LENGTH];
    char ch, term_ch;
    int ch_idx = 0;

    printf("Enter a sentence: ");

    // Stores the letters of the sentence.
    for (;;)
    {
        ch = getchar();

        if (ch == '?' || ch == '.' || ch == '!')
        {
            term_ch = ch; 
            break;
        } 

        sentence[ch_idx] = ch;
        ch_idx++;

        // Prevents out-of-bounds indexing.
        if (ch_idx == MAX_LENGTH)
        {
            break;
        }
    }

    printf("Reversal of sentence:");

    int word_end = ch_idx;
    for (int i = ch_idx - 1; i >= 0; i--)
    {
        ch = sentence[i];

        if (ch == ' ' || i == 0)
        {
            // First word in original sentence needs an extra space.
            if (i == 0)
            {
                putchar(' ');
            }

            // Outputs the letters of the word including the space.
            for (int j = i; j < word_end; j++)
            {
                putchar(sentence[j]);
            }
             
            word_end = i;
        }
    }

    printf("%c\n", term_ch);

    return 0;
}

