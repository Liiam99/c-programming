/*
 * Name: project_2.c
 * Purpose: Asks user to enter a time, then displays times of earliest flight.
 * Author: L. Adam
 */

#include <stdio.h>
#include <stdlib.h>

int calc_total_mins(int hours, int mins, char period);
void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);
void print_formatted_time(int time);

int main(void)
{
    int hours, mins;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &mins);

    int total_mins = hours*60 + mins;

    int departure_time, arrival_time;
    find_closest_flight(total_mins, &departure_time, &arrival_time);

    printf("Closest departure time is ");
    print_formatted_time(departure_time);
    printf(", arriving at ");
    print_formatted_time(arrival_time);
    putchar('\n');

    return 0;
}

int calc_total_mins(int hours, int mins, char period)
{
    if (period == 'P' && hours != 12)
    {
        hours += 12;
    }
    else if (hours == 12 && period == 'A')
    {
        hours -= 12;
    }

    int total_mins = hours*60 + mins;

    return total_mins;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    int departure_times[] = {
        calc_total_mins(8, 0, 'A'), 
        calc_total_mins(9, 43, 'A'),
        calc_total_mins(11, 19, 'A'),
        calc_total_mins(12, 47, 'P'),
        calc_total_mins(2, 0, 'P'),
        calc_total_mins(3, 45, 'P'),
        calc_total_mins(7, 0, 'P'),
        calc_total_mins(9, 45, 'P')
    };

    int arrival_times[] = {
        calc_total_mins(10, 16, 'A'), 
        calc_total_mins(11, 52, 'A'),
        calc_total_mins(1, 31, 'P'),
        calc_total_mins(3, 0, 'P'),
        calc_total_mins(4, 8, 'P'),
        calc_total_mins(5, 55, 'P'),
        calc_total_mins(9, 20, 'P'),
        calc_total_mins(11, 58, 'P')
    };

    // Initialises the variables with the first departure time.
    int earliest_departure_idx = 0;
    int time_diff = abs(desired_time - departure_times[earliest_departure_idx]);
    int smallest_time_diff = time_diff; 

    // Finds closest departure time.
    for (int i = 1; i < 8; i++)
    {
        time_diff = abs(desired_time - departure_times[i]);
        if (time_diff < smallest_time_diff)
        {
            earliest_departure_idx = i;
            smallest_time_diff = time_diff; 
        }
    }

    *departure_time = departure_times[earliest_departure_idx];
    *arrival_time = arrival_times[earliest_departure_idx];
}

void print_formatted_time(int time)
{
    int mins = time % 60;
    int hours = (time - mins)/60;
    char time_of_day = hours >= 12 ? 'p' : 'a';

    if (hours > 12)
    {
        hours -= 12;
    }

    printf("%d:%.2d %c.m.", hours, mins, time_of_day);
}

