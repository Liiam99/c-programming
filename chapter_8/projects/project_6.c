/*
 * Name: project_6.c
 * Purpose: Converts normal message to leetspeak.
 * Author: L. Adam
 */

#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char ch;
    char sentence[100];

    printf("Enter message: ");

    int n_chars = 0;
    while ((ch = getchar()) != '\n')
    {
        sentence[n_chars] = ch;
        n_chars++;
    } 

    printf("In B1FF-speak: ");

    for (int i = 0; i < n_chars; i++)
    {
        ch = sentence[i];
        ch = toupper(ch); 

        switch (ch)
        {
            case 'A':
                putchar('4');
                break;
            case 'B':
                putchar('8');
                break;
            case 'E':
                putchar('3');
                break;
            case 'I':
                putchar('1');
                break;
            case 'O':
                putchar('0');
                break;
            case 'S':
                putchar('5');
                break;
            default:
                putchar(ch);
        }
    }

    printf("!!!!!!!!!!\n");

    return 0;
}

