#include <stdio.h>
#include<stdlib.h>

#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1, rear = -1;

int isEmpty() {
    return front == -1 && rear == -1;
}

int isFull() {
    return rear == MAX_SIZE - 1;
}

void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full. Cannot enqueue.\n");
        return;
    } else if (isEmpty()) {
        front = rear = 0;
    } else {
        rear++;
    }
    queue[rear] = value;
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty. Cannot dequeue.\n");
        return;
    } else if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
}

int queueSize() {
    if (isEmpty()) {
        return 0;
    }
    return rear - front + 1;
}

void main() {
    int n;

    printf("Enter number of elements to enqueue: ");
    scanf("%d", &n);

    printf("Enter %d elements to enqueue:\n", n);
    for (int i = 0; i < n; i++) {
        int element;
        scanf("%d", &element);
        enqueue(element);
    }

    printf("Number of items in the queue: %d\n", queueSize());

}
