/*
 * Name: project_11.c
 * Purpose: Calculates the average word length for a sentence.
 * Author: L. Adam
 */

#include <ctype.h> 
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX_LEN 80

double compute_average_word_length(const char *sentence);

int main(void)
{
    char sentence[MAX_LEN];
    printf("Enter a sentence: ");

    fgets(sentence, MAX_LEN, stdin);
    sentence[strcspn(sentence, "\n")] = '\0';

    double avg_word_length = compute_average_word_length(sentence);
    printf("Average word length: %.1lf\n", avg_word_length);

    return 0;
}

double compute_average_word_length(const char *sentence)
{
    int num_words = 0, num_letters = 0;
    bool word = false;

    while (*sentence)
    {
        if (isalpha(*sentence))
        {
            // First letter of the word.
            if (!word)
            {
                num_words++;
                word = true;
            }

            num_letters++;
        }
        else if (*sentence == ' ' && word)
        {
            word = false;
        }

        sentence++;
    }

    return (double) num_letters/num_words;
}

