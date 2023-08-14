/*
 * Name: project_12.c
 * Purpose: Program that evaluates an expression.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    float value = 0;
    float operand;
    char ch;

    printf("Enter an expression: ");
    scanf("%f", &value);
    while ((ch = getchar()) != '\n')
    {
        switch (ch)
        {
            case '*':
                scanf("%f", &operand);
                value *= operand;
                break;
            case '/':
                scanf("%f", &operand);
                value /= operand;
                break;
            case '-':
                scanf("%f", &operand);
                value -= operand;
                break;
            case '+':
                scanf("%f", &operand);
                value += operand;
                break;
        }
    }

    printf("Value of expression: %.1f\n", value);

    return 0;
}

