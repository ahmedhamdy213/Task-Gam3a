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

void reverseQueue() {
    if (isEmpty()) {
        printf("Queue is empty. Nothing to reverse.\n");
        return;
    }

    int temp[MAX_SIZE];
    int index = 0;

    for (int i = rear; i >= front; i--) {
        temp[index++] = queue[i];
    }

    for (int i = front; i <= rear; i++) {
        queue[i] = temp[i - front];
    }
}

void displayQueue() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
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

    printf("Original ");
    displayQueue();

    reverseQueue();

    printf("Reversed ");
    displayQueue();

}
