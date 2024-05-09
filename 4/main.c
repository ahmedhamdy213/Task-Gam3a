#include <stdio.h>

void main() {
    int MARK[20][5]; 
    float subjectAverage[5] = {0}; 
    float studentAverage[20] = {0}; 
    int below50Count = 0; 

    for (int i = 0; i < 20; i++) {
        float sum = 0;
        printf("Enter marks for student %d (5 subjects): ", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf("%d", &MARK[i][j]);
            sum += MARK[i][j];
            subjectAverage[j] += MARK[i][j];
        }
        studentAverage[i] = sum / 5;

        if (studentAverage[i] < 50)
            below50Count++;
    }

    for (int i = 0; i < 5; i++) {
        subjectAverage[i] /= 20;
    }

    printf("\nAverage marks obtained in each subject:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: %.2f\n", i + 1, subjectAverage[i]);
    }

    printf("\nAverage marks obtained by every student:\n");
    for (int i = 0; i < 20; i++) {
        printf("Student %d: %.2f\n", i + 1, studentAverage[i]);
    }

    printf("\nNumber of students who have scored below 50 in their average: %d\n", below50Count);

    printf("\nScores obtained by every student:\n");
    for (int i = 0; i < 20; i++) {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < 5; j++) {
            printf("%d ", MARK[i][j]);
        }
        printf("\n");
    }

}
