/*
 * Name: project_2.c
 * Purpose: Stack with pop and push but with pointers.
 * Author: L. Adam
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

int contents[STACK_SIZE];
int *top_ptr = &contents[0];

int main(void)
{
    return 0;
}

void make_empty(void)
{
    top_ptr = &contents[0];
}

bool is_empty(void)
{
    return top_ptr == &contents[0];
}

bool is_full(void)
{
    return top_ptr == &contents[STACK_SIZE];
}

void push(int i)
{
    if (is_full())
    {
        stack_overflow();
    }
    else
    {
        *top_ptr++ = i;
    }
}

int pop(void)
{
    if (is_empty())
    {
        stack_underflow();
        return 1;
    }
    else
    {
        return *--top_ptr;
    }
}

void stack_overflow(void)
{
    printf("Stack overflow\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    printf("Stack underflow\n");
    exit(EXIT_SUCCESS);
}

