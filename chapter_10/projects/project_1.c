/*
 * Name: project_1.c
 * Purpose: Stack with pop and push.
 * Author: L. Adam
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char ch);
char pop(void);
int stack_overflow(void);
int stack_underflow(void);

char contents[STACK_SIZE];
int top = 0;

int main(void)
{
    printf("Enter parentheses and/or braces: ");

    char ch;
    char popped_ch;

    while ((ch = getchar()) != '\n')
    {
        if (ch == '(' || ch == '{')
        {
            push(ch);
        }
        else if (ch == ')' || ch == '}')
        {
            popped_ch = pop();        
            
            if ((popped_ch != '(' && ch != ')') && (popped_ch != '{' && ch != '}'))
            {
                printf("Parentheses/braces are not nested properly\n");
                return 0;
            }
        }
    }

    if (is_empty())
    {
        printf("Parentheses/braces are nested properly\n");
    }
    else
    {
        printf("Parentheses/braces are not nested properly\n");
    }

    return 0;
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(char ch)
{
    if (is_full())
    {
        stack_overflow();
    }
    else
    {
        contents[top++] = ch;
    }
}

char pop(void)
{
    if (is_empty())
    {
        return stack_underflow();
    }
    else
    {
        return contents[--top];
    }
}

int stack_overflow(void)
{
    printf("Stack overflow\n");
    exit(EXIT_FAILURE);
}

int stack_underflow(void)
{
    printf("Parentheses/braces are not nested properly\n");
    exit(EXIT_SUCCESS);
}

