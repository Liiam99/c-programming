/*
 * Name: project_6.c
 * Purpose: Evaluating RPN expressions with a stack.
 * Author: L. Adam
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int operand);
int pop(void);
void handle_expression(char operator);
int stack_overflow(void);
int stack_underflow(void);

int contents[STACK_SIZE];
int top = 0;

int main(void)
{
    char ch;
    bool stop = false;

    do
    {
        printf("Enter an RPN expression: ");

        for (;;)
        {
            scanf(" %c", &ch);

            if (ch >= '0' && ch <= '9')
            {
                push(ch - '0');
            }
            else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
            {
                handle_expression(ch);
            }
            else if (ch == '=')
            {
                printf("Value of expression: %d\n", pop());
                make_empty();
                break;
            }
            else
            {
                stop = true;
                break;
            }
        }
    }
    while (!stop);

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

void push(int operand)
{
    if (is_full())
    {
        stack_overflow();
    }
    
    contents[top++] = operand;
}

int pop(void)
{
    if (is_empty())
    {
        return stack_underflow();
    }
    
    return contents[--top];
}

void handle_expression(char operator)
{
    int second_operand = pop(), first_operand = pop();
    int result;

    if (operator == '+')
    {
        result = first_operand + second_operand;
    }
    else if (operator == '-')
    {
        result = first_operand - second_operand;
    }
    else if (operator == '*')
    {
        result = first_operand * second_operand;
    }
    else if (operator == '/')
    {
        result = first_operand / second_operand;
    }

    push(result);
}

int stack_overflow(void)
{
    printf("Expression is too complex\n");
    exit(EXIT_FAILURE);
}

int stack_underflow(void)
{
    printf("Not enough operands in expression\n");
    exit(EXIT_FAILURE);
}

