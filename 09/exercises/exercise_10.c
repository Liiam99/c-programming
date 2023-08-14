/*
 * Name: project_10.c
 * Purpose: Different array functions.
 * Author: L. Adam
 */

#include <stdio.h>

int largest(int a[], int n);
double average(int a[], int n);
int n_positive(int a[], int n);

int main(void)
{
    int a[] = {5, 3, 4, 2, -1};
    int n = 5; 

    printf("%d %.2lf %d\n", largest(a, n), average(a, n), n_positive(a, n));

    return 0;
}

int largest(int a[], int n)
{
    int largest = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }

    return largest;
}

double average(int a[], int n)
{
    double avg;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    avg = (double) sum/n; 

    return avg;
}

int n_positive(int a[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            count++;
        }
    }

    return count;
}

