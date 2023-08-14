/*
 * Name: project_16.c
 * Purpose: Tests whether two words are anagrams.
 * Author: L. Adam
 */

#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int letter_counts[26] = {0};
    char ch;
    int letter_idx = 0;

    printf("Enter first word: ");

    while ((ch = getchar()) != '\n')
    {
        if (!isalpha(ch))
        {
            continue;
        }

        ch = tolower(ch);
        letter_idx = ch - 'a';
        letter_counts[letter_idx]++;
    }

    printf("Enter second word: ");

    while ((ch = getchar()) != '\n')
    {
        if (!isalpha(ch))
        {
            continue;
        }

        ch = tolower(ch);
        letter_idx = ch - 'a';
        letter_counts[letter_idx]--;
    }

    for (letter_idx = 0; letter_idx < 26; letter_idx++)
    {
        // The two words are not anagrams.
        if (letter_counts[letter_idx] != 0)
        {
            break;
        }
    }

    if (letter_idx == 26)
    {
        printf("The words are anagrams.\n");
    }
    else
    {
        printf("The words are not anagrams.\n");
    }

    return 0;
}

