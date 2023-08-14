/*
 * Name: project_9.c
 * Purpose: Compares two dates, then indicates which date comes earlier.
 * Author: L. Adam
 */

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    int m1, d1, y1;
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m1, &d1, &y1);

    int m2, d2, y2;
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m2, &d2, &y2);
    
    bool first_earlier = true;

    if (y1 > y2)
    {
        first_earlier = false;
    }
    else if (y1 == y2 && m1 > m2)
    {
        first_earlier = false;
    }
    else if (y1 == y2 && m1 == m2 && d1 > d2)
    {
        first_earlier = false;
    }
    else if (y1 == y2 && m1 == m2 && d1 == d2)
    {
        printf("Same date.\n");
        return 0;
    }

    if (first_earlier)
    {
        printf("%d/%d/%d is earlier than %d/%d/%d\n",
                m1, d1, y1,
                m2, d2, y2);
    }
    else
    {
        printf("%d/%d/%d is earlier than %d/%d/%d\n",
                m2, d2, y2,
                m1, d1, y1);
    }

    return 0;
}

