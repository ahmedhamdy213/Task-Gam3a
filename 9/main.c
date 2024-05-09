#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100

int stack1[MAX_SIZE], stack2[MAX_SIZE];
int top1 = -1, top2 = -1;

bool isEmpty(int top) {
    return (top == -1);
}

void push(int stack[], int *top, int value) {
    if (*top == MAX_SIZE - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack[++(*top)] = value;
}

int pop(int stack[], int *top) {
    if (isEmpty(*top)) {
        printf("Stack underflow\n");
        return -1;
    }
    return stack[(*top)--];
}

bool compareStacks(int stack1[], int top1, int stack2[], int top2) {
    if (top1 != top2) {
        return false;
    }

    for (int i = 0; i <= top1; i++) {
        if (stack1[i] != stack2[i]) {
            return false;
        }
    }
    return true;
}

void main() {
    int size1, size2;

    printf("Enter size of stack 1: ");
    scanf("%d", &size1);

    printf("Enter elements for stack 1:\n");
    for (int i = 0; i < size1; i++) {
        int element;
        scanf("%d", &element);
        push(stack1, &top1, element);
    }

    printf("Enter size of stack 2: ");
    scanf("%d", &size2);

    printf("Enter elements for stack 2:\n");
    for (int i = 0; i < size2; i++) {
        int element;
        scanf("%d", &element);
        push(stack2, &top2, element);
    }

    if (compareStacks(stack1, top1, stack2, top2)) {
        printf("Stacks are equal.\n");
    } else {
        printf("Stacks are not equal.\n");
    }

}
