#include <stdio.h>
#include<stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}



void main() {
    int arr[] = {3, 8, 1, 6, 7, 2, 9, 4, 5}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

int *largest = arr;
    int *smallest = arr;
    int *secondLargest = arr;
    int *secondSmallest = arr;

    
    for (int i = 0; i < size; i++) {
        if (*(arr + i) > *largest) {
            secondLargest = largest;
            largest = arr + i;
        } else if (*(arr + i) > *secondLargest && *(arr + i) != *largest) {
            secondLargest = arr + i;
        }
    }

  
    for (int i = 0; i < size; i++) {
        if (*(arr + i) < *smallest) {
            secondSmallest = smallest;
            smallest = arr + i;
        } else if (*(arr + i) < *secondSmallest && *(arr + i) != *smallest) {
            secondSmallest = arr + i;
        }
    }

  
    swap(secondLargest, secondSmallest);
    printf("Array after interchanging second biggest and second smallest elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}
