/*
 * Name: project_8.c
 * Purpose: Computes different stats of quiz grades of students.
 * Author: L. Adam
 */

#define N_QUIZZES 5
#define N_STUDENTS 5

#include <stdio.h>

int main(void)
{
    int table[N_QUIZZES][N_STUDENTS];
    
    for (int i = 0; i < N_QUIZZES; i++)
    {
        printf("Enter grades of quiz nr. %d: ", i + 1);
        
        for (int j = 0; j < N_STUDENTS; j++)
        {
            scanf("%d", &table[i][j]);
        }
    }

    int quiz_totals[N_QUIZZES] = {0}, student_totals[N_STUDENTS] = {0},
        quiz_high_scores[N_QUIZZES] = {0}, quiz_low_scores[N_QUIZZES] = {0};
    
    for (int i = 0; i < N_QUIZZES; i++)
    {
        for (int j = 0; j < N_STUDENTS; j++)
        {
            int quiz_score = table[i][j];
            quiz_totals[i] += quiz_score; 
            student_totals[i] += table[j][i];

            if (quiz_score > quiz_high_scores[i])
            {
                quiz_high_scores[i] = quiz_score;
            }
            else if (quiz_score < quiz_low_scores[i] || quiz_low_scores[i] == 0 )
            {
                quiz_low_scores[i] = quiz_score;
            }
        }
    }

    for (int i = 0; i < N_QUIZZES; i++)
    {
        float quiz_avg = (float) quiz_totals[i]/N_STUDENTS;
        printf("%.1f %d %d\n", quiz_avg, quiz_high_scores[i], quiz_low_scores[i]);
    }

    for (int j = 0; j < N_STUDENTS; j++)
    {
        float student_avg = (float) student_totals[j]/N_QUIZZES;
        printf("%.1f %d\n", student_avg, student_totals[j]); 
    }

    return 0;
} 

