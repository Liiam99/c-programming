/*
 * Name: project_11.c
 * Purpose: Translates an alphabetic phone number into a numeric form.
 * Author: L. Adam
 */

#include <ctype.h>
#include <stdio.h>

#define NUMBER_LENGTH 15

int main(void)
{
    char phone_number[NUMBER_LENGTH];
    char ch;

    printf("Enter phone number: ");

    int number_idx = 0;
    while ((ch = getchar()) != '\n' && number_idx != NUMBER_LENGTH)
    {
        ch = toupper(ch);
        switch (ch)
        {
            case 'A': case 'B': case 'C':
                phone_number[number_idx] = '2'; 
                break;
            case 'D': case 'E': case 'F':
                phone_number[number_idx] = '3'; 
                break;
            case 'G': case 'H': case 'I':
                phone_number[number_idx] = '4'; 
                break;
            case 'J': case 'K': case 'L':
                phone_number[number_idx] = '5'; 
                break;
            case 'M': case 'N': case 'O':
                phone_number[number_idx] = '6'; 
                break;
            case 'P': case 'R': case 'S':
                phone_number[number_idx] = '7'; 
                break;
            case 'T': case 'U': case 'V':
                phone_number[number_idx] = '8'; 
                break;
            case 'W': case 'X': case 'Y':
                phone_number[number_idx] = '9'; 
                break;
            default: 
                phone_number[number_idx] = ch; 
                break;
        }

        number_idx++;
    }

    printf("In numeric form: ");
    for (int i = 0; i < number_idx; i++)
    {
        putchar(phone_number[i]);
    } 

    printf("\n");

    return 0;
}

