#include<stdio.h>
struct node
{
    int data;
    struct node*next;
};
struct node*top=0;
struct node*temp;

void push()
{
    int value;
    printf("\nEnter data : ");
    scanf("%d",&value);
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=top;
    top=newnode;
}

void pop()
{
    if(top==0)
    {
        printf("\nStack is Empty!");
    }
    else
    {
        printf("\nThe popped element is : %d",top->data);
        top=top->next;
    }
}

void display()
{
    if(top==0)
    {
        printf("\nStack is Empty!");
    }
    else
    {
        printf("\nThe Elements are : ");
        temp=top;
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}

void main() {
    int choice;

    while (1) {
        printf("\nMenu :-\n1. Push\n2. Pop\n3. Display\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice, please try again\n");
        }
    }
}
