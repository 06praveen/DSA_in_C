#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* front = 0;
struct node* rear = 0;
struct node* temp;

void enqueue() {
    int value;
    printf("\nEnter data: ");
    scanf("%d", &value);

    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = 0;

    if (front == 0 && rear == 0) {
        front = rear = newnode;
    } else {
        rear->next = newnode;
        rear = newnode;
    }
}

void dequeue() {
    if (front == 0) {
        printf("\nQueue is Empty!");
    } else {
        temp = front;
        printf("\nThe dequeued element is: %d", temp->data);
        front = front->next;
        free(temp);
    }
}

void display() {
    if (front == 0) {
        printf("\nQueue is Empty!");
    } else {
        temp = front;
        printf("\nThe elements are: ");
        while (temp != 0) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

void main() {
    int choice;

    while (1) {
        printf("\nMenu :-\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("\nExiting...");
                exit(0);
            default:
                printf("\nInvalid choice! please try again");
        }
    }
}
