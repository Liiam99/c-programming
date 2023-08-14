/*
 * Name: project_15.c
 * Purpose: Encrypts a message using Caesar cipher.
 * Author: L. Adam
 */

#include <stdio.h>

#define MAX_LENGTH 80

int main(void)
{
    printf("Enter message to be encrypted: ");

    char message[MAX_LENGTH];
    int ch_idx = 0;
    char ch;

    while ((ch = getchar()) != '\n')
    {
        if (ch_idx > MAX_LENGTH)
        {
            break;
        }

        message[ch_idx] = ch;
        ch_idx++;
    }

    int shift_amount;
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift_amount);

    printf("Encrypted message: ");

    for (int i = 0; i < ch_idx; i++)
    {
        ch = message[i];

        if (ch >= 'a' && ch <= 'z')
        {
            ch = ((ch - 'a') + shift_amount) % 26 + 'a';
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch = ((ch - 'A') + shift_amount) % 26 + 'A';
        }

        putchar(ch);
    }

    putchar('\n');

    return 0;
}

