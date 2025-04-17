#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* prev;
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
    newnode->prev = NULL;

    if (head == NULL) {
        head = newnode;
        temp = newnode;
    } else {
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
        newnode->prev = temp;
    }
    printf("Node inserted.\n");
}

void delete() {
    if (head == NULL) {
        printf("\nList is empty!\n");
    } else if (head->next == NULL) {
        printf("\nDeleted node with value: %d\n", head->data);
        free(head);
        head = NULL;
    } else {
        temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        printf("\nDeleted node with value: %d\n", temp->data);
        temp->prev->next = NULL;
        free(temp);
    }
}

void display_forward() {
    if (head == NULL) {
        printf("\nList is empty!\n");
    } else {
        struct node* temp = head;
        printf("\nDoubly Linked List (Forward): ");
        while (temp != NULL) {
            printf("%d <-> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}


void display_reverse() {
    if (head == NULL) {
        printf("\nList is empty!\n");
    } else {
        struct node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        printf("\nDoubly Linked List (Reverse): ");
        while (temp != NULL) {
            printf("%d <-> ", temp->data);
            temp = temp->prev;
        }
        printf("NULL\n");
    }
}

void main() {
    int choice;
    while (1) {
        printf("\nMenu :-\n1. Insert\n2. Delete\n3. Display Forward\n4. Display Reverse\n5. Exit");
        printf("\nChoose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insert();
            break;
            case 2: delete();
            break;
            case 3: display_forward();
            break;
            case 4: display_reverse();
            break;
            case 5: printf("Exiting...\n");
            exit(0);
            default: printf("Invalid choice! Try again...\n");
        }
    }
}
