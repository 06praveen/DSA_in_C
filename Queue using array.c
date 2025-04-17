#include<stdio.h>
#define N 5
int front=-1;
int rear=-1;
int Queue[N];

void enqueue()
{
    if(rear==N-1)
    {
        printf("\nQueue is Full!");
    }
    else if(front==-1&&rear==-1)
    {
        front=0;
        rear=0;
        printf("\nEnter the element to Enqueue : ");
        scanf("%d",&Queue[rear]);
    }
    else
    {
        rear++;
        printf("\nEnter the element to Enqueue : ");
        scanf("%d",&Queue[rear]);
    }
}

void dequeue()
{
    if(front==-1&&rear==-1)
    {
        printf("\nQueue is Empty!");
    }
    else if(front==rear)
    {
        printf("\nThe Dequeue element is : %d",Queue[front]);
        front==-1;
        rear==-1;
    }
    else
    {
        printf("\nThe Dequeue element is : %d",Queue[front]);
        front++;
    }
}

void display()
{
    if(front==-1&&rear==-1)
    {
        printf("\nQueue is Empty!");
    }
    else
    {
        printf("\nThe element in the Queue are : ");
        for(int i=0;i<=rear;i++)
        {
           printf("\t%d",Queue[i]);
        }
    }
}

void peek()
{
    if(front==-1&&rear==-1)
    {
        printf("\nQueue is Empty!");
    }
    else
    {
        printf("\nThe peek element is : %d",Queue[front]);
    }
}

void main()
{
    int ch;
    do
    {
      printf("\nSelect an Option : \n1.Enqueue\n2.Dequeue\n3.Display\n4.Peek\n5.Exit\n");
      scanf("%d",&ch);

      switch(ch)
        {
            case 1 : enqueue();
            break;
            case 2 : dequeue();
            break;
            case 3 : display();
            break;
            case 4 : peek();
            break;
            case 5 : printf("\nExiting.....");
            break;
            default : printf("\nInvalid Choice!");
        }
    }
    while(ch!=5);
}
