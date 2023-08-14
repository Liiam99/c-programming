/*
 * Name: project_1.c
 * Purpose: Sorts a series of integers.
 * Author: L. Adam
 */

#include <stdio.h>

#define N 5

int selection_sort(int a[], int n);

int main(void)
{
    int a[N]; 
    
    printf("Enter %d integers to sort: ", N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    selection_sort(a, N);

    printf("Sorted:");
    
    for (int i = 0; i < N; i++)
    {
        printf(" %d", a[i]);
    }
    
    putchar('\n'); 

    return 0;
}

int selection_sort(int a[], int n)
{ 
    int largest = a[0], largest_idx = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
            largest_idx = i;            
        }
    }

    int last_value = a[n - 1];
    a[n - 1] = largest;
    a[largest_idx] = last_value; 

    return n == 1 ? 0 : selection_sort(a, n - 1);
}

