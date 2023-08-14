/*
 * Name: exercise_16.c
 * Purpose: Condensing a recursive function.
 * Author: L. Adam
 */

int fact (int n)
{
    return n <= 1 ? 1 : n*fact(n - 1);
}

