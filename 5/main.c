#include <stdio.h>
#include<stdlib.h>

void main() {
    int num[20]; 
    int sum_of_squares = 0; 

    printf("Enter 20 integers:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 20; i++) {
        sum_of_squares += num[i] * num[i];
    }

    printf("Sum of squares of the elements: %d\n", sum_of_squares);

}
