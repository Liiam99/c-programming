/*
 * Name: project_13.c
 * Purpose: Calculates the average word length for a sentence.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    int num_word = 0, num_letters = 0;
    float avg_word_len;
    char ch;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n')
    {
        switch (ch)
        {
            case ' ':
                num_word++;
                break;
            default:
                num_letters++;
                break;
        }
    }

    // Counts last word.
    num_word++;

    avg_word_len = (float) num_letters/num_word;
    printf("Average word length: %.1f\n", avg_word_len);

    return 0;
}

