#include <stdio.h>

void main() {
    int arr[10][5]; 
    int odd[50], even[50]; 
    int odd_count = 0, even_count = 0; 

    printf("Enter 50 integers for the 2D array (10x5):\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[i][j] % 2 == 0) {
                even[even_count++] = arr[i][j];
            } else {
                odd[odd_count++] = arr[i][j];
            }
        }
    }

    printf("\nOdd elements array:\n");
    for (int i = 0; i < odd_count; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    printf("\nEven elements array:\n");
    for (int i = 0; i < even_count; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

}
