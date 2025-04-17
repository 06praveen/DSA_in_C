#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head = NULL;
struct node* temp;

void insert() {
    int value;
    printf("\nEnter value to insert: ");
    scanf("%d", &value);

    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
        temp = newnode;
    } else {
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
    }
    printf("Node inserted.\n");
}

void delete() {
    if (head == NULL) {
        printf("\nList is empty!\n");
    } else {
        temp = head;
        printf("\nDeleted node with value: %d\n", temp->data);
        head = head->next;
        free(temp);
    }
}

void display() {
    if (head == NULL) {
        printf("\nList is empty!\n");
    } else {
        temp = head;
        printf("\nLinked List: ");
        while (temp != NULL) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

void main() {
    int choice;
    while (1) {
        printf("\nMenu :-\n1. Insert\n2. Delete\n3. Display\n4. Exit");
        printf("\nChoose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insert();
            break;
            case 2: delete();
            break;
            case 3: display();
            break;
            case 4: printf("Exiting...\n");
            exit(0);
            default: printf("Invalid choice! Try again...");
        }
    }
}
