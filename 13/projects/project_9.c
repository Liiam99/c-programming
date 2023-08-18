/*
 * Name: project_9.c
 * Purpose: Counts number of vowels in given sentence.
 * Author: L. Adam
 */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAX_LEN 80

int compute_vowel_count(const char *sentence);

int main(void)
{
    char sentence[MAX_LEN];
    printf("Enter a sentence: ");
    fgets(sentence, MAX_LEN, stdin);

    // Strips newline.
    sentence[strcspn(sentence, "\n")] = '\0';

    int num_vowels = compute_vowel_count(sentence);

    printf("Your sentence contains %d vowel", num_vowels);

    if (num_vowels > 1)
    {
        putchar('s');
    }

    printf(".\n");

    return 0;
}

int compute_vowel_count(const char *sentence)
{
    int vowel_count = 0;
    while (*sentence)
    {
        switch (toupper(*sentence++))
        {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                vowel_count++;
                break;
        }
    }

    return vowel_count;
}

