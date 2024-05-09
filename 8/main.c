#include <stdio.h>
#include<stdlib.h>

void main() {
    int matrix[10][10];
    int row, col, sum = 0;

    printf("Enter number of rows and columns (max 10 each): ");
    scanf("%d %d", &row, &col);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i < j) {
                sum += matrix[i][j];
            }
        }
    }

    printf("Sum of elements above the main diagonal: %d\n", sum);

}
