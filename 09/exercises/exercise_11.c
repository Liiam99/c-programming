/*
 * Name: exercise_11.c
 * Purpose: Computes GPA for array of grades.
 * Author: L. Adam
 */

#include <ctype.h>
#include <stdio.h>

float compute_gpa(char grades[], int n);

int main(void)
{
    char grades[] = {'a', 'B', 'F', 'c', 'a', 'F', 'c', 'A'};
    int n = 8;
    printf("%.2f\n", compute_gpa(grades, n));

    return 0;
}

float compute_gpa(char grades[], int n)
{
    char ch;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        ch = toupper(grades[i]);

        switch (ch)
        {
            case 'A':
                sum += 4;
                break;
            case 'B':
                sum += 3;
                break;
            case 'C':
                sum += 2;
                break;
            case 'D':
                sum += 1;
                break;
        }
    }

    float gpa = (float) sum/n;

    return gpa;
}

