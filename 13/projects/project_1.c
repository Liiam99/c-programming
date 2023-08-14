/*
 * Name: project_1.c
 * Purpose: Finds smallest and largest in a series of words.
 * Author: L. Adam
 */

#include <stdio.h>
#include <string.h>

#define MAX_LEN 20

int main(void)
{
    char word[MAX_LEN] = "", smallest[MAX_LEN] = "", largest[MAX_LEN] = "";
    int word_len;

    do
    {
        printf("Enter word: ");
        fgets(word, MAX_LEN, stdin);

        // Removes newline from word if it's there.
        word[strcspn(word, "\n")] = '\0';
        
        word_len = strlen(word);

        if (strcmp(word, smallest) < 0 || strlen(smallest) == 0)
        {
            strcpy(smallest, word);
        }
        else if (strcmp(word, largest) > 0)
        {
            strcpy(largest, word);
        }
    }
    while (word_len != 4);

    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);

    return 0;
}

