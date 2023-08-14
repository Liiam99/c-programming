/*
 * Name: project_4.c
 * Purpose: Reads an integer entered by the user and displays it in octal.
 * Author: L. Adam
 */

#include <math.h>
#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);
    
    int octal_num = 0;
    int i;
    for (i = 0; i < 5; i++)
    {
        octal_num += (num/((int) pow(8, i)) % 8)*pow(10, i);
    }

    printf("In octal, your number is: %5.5d\n", octal_num);

    return 0;
}

