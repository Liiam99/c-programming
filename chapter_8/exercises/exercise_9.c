/*
 * Name: exercise_9.c
 * Purpose: Two-dimensional array loop practice.
 * Author: L. Adam
 */

int main(void)
{
    int num_days = 30;
    int num_hours = 24;
    double temperature_readings[30][24] = {0};
    
    double daily_avg;
    double total_avg = 0.0;

    for (int i = 0; i < num_days; i++) 
    {
        daily_avg = 0.0;
        for (int j = 0; i < num_hours; j++)
        {
           daily_avg += temperature_readings[i][j];
        }

        daily_avg /= num_hours;
        total_avg += daily_avg;
    } 

    total_avg /= num_days;

    return 0;
}

