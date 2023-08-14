/*
 * Name: project_4.c
 * Purpose: Tests whether two words are anagrams.
 * Author: L. Adam
 */

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void)
{
    int counts1[26] = {0}, counts2[26] = {0};

    printf("Enter first word: ");
    read_word(counts1);
    printf("Enter second word: ");
    read_word(counts2);

    bool is_anagram = equal_array(counts1, counts2);

    if (is_anagram)
    {
        printf("The words are anagrams.\n");
    }
    else
    {
        printf("The words are not anagrams.\n");
    }

    return 0;
}

void read_word(int counts[26])
{
    char ch;
    int letter_idx = 0;

    while ((ch = getchar()) != '\n')
    {
        if (!isalpha(ch))
        {
            continue;
        }

        ch = tolower(ch);
        letter_idx = ch - 'a';
        counts[letter_idx]++;
    }
}

bool equal_array(int counts1[26], int counts2[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (counts1[i] != counts2[i])
        {
            return false;
        }
    }

    return true;
}

