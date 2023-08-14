/*
 * Name: exercise_3.c
 * Purpose: Practice with pointers.
 * Author: L. Adam
 */

void avg_sum(double a[], int n, double *avg, double *sum);

void avg_sum(double a[], int n, double *avg, double *sum)
{
    *sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        *sum += a[i];
    }

    *avg = *sum/n;
}

