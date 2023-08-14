/*
 * Name: project_10.c
 * Purpose: Determines which of the given dates is the earliest.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    int m_earliest = 0, d_earliest = 0, y_earliest = 0;
    int m, d, y;

    while (1)
    {
        printf("Enter a date: (mm/dd/yy): ");
        scanf("%d/%d/%d", &m, &d, &y);

        // Stop signal.
        if (m == 0 && d == 0 && y == 0)
        {
            break;
        }

        if (y < y_earliest
            || m < (m_earliest && y == y_earliest)
            || d < (d_earliest && m == m_earliest && y == y_earliest)
            || (m_earliest == 0 && d_earliest == 0 && y_earliest == 0))
        {
            m_earliest = m;
            d_earliest = d;
            y_earliest = y;
        }
    }

    printf("%d/%d/%.2d is the earliest date.\n", m_earliest, d_earliest, y_earliest);

    return 0;
}

