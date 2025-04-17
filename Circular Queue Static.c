#include <stdio.h>
#define N 5

int Queue[N];
int front = -1;
int rear = -1;

void enqueue() {
    int value;
    if ((rear + 1) % N == front) {
        printf("\nQueue is Full!");
    } else {
        printf("\nEnter the element to Enqueue: ");
        scanf("%d", &value);

        if (front == -1 && rear == -1) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % N;
        }
        Queue[rear] = value;
        printf("Enqueued: %d\n", value);
    }
}

void dequeue() {
    if (front == -1 && rear == -1) {
        printf("\nQueue is Empty!");
    } else if (front == rear) {
        printf("\nDequeued: %d\n", Queue[front]);
        front = rear = -1;
    } else {
        printf("\nDequeued: %d\n", Queue[front]);
        front = (front + 1) % N;
    }
}

void display() {
    if (front == -1 && rear == -1) {
        printf("\nQueue is Empty!");
    } else {
        int i = front;
        printf("\nQueue elements: ");
        while (1) {
            printf("%d ", Queue[i]);
            if (i == rear) break;
            i = (i + 1) % N;
        }
        printf("\n");
    }
}

void peek() {
    if (front == -1 && rear == -1) {
        printf("\nQueue is Empty!");
    } else {
        printf("\nPeek element: %d\n", Queue[front]);
    }
}

void main() {
    int ch;
    do {
        printf("\nMenu :-\n1. Enqueue\n2. Dequeue\n3. Display\n4. Peek\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: enqueue();
            break;
            case 2: dequeue();
            break;
            case 3: display();
            break;
            case 4: peek();
            break;
            case 5: printf("\nExiting...\n");
            break;
            default: printf("\nInvalid choice, please try again!\n");
        }
    } while (ch != 5);
}
