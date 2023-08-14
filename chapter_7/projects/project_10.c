/*
 * Name: project_10.c
 * Purpose: Counts number of vowels in given sentence.
 * Author: L. Adam
 */

#include <ctype.h>
#include <stdio.h>

int main(void)
{
    printf("Enter a sentence: ");

    int num_vowels = 0;
    char ch;
    while ((ch = getchar()) != '\n')
    {
        ch = toupper(ch);
        
        switch (ch)
        {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                num_vowels++;
                break;
        }
    }

    printf("Your sentence contains %d vowels.\n", num_vowels);

    return 0;
}

