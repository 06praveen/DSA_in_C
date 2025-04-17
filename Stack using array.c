#include<stdio.h>
#define N 5
int top=-1;
int stack[N];

void push()
{
 if(top==N-1)
    printf("\nStack is Full!");
 else
 {
    top++;
    printf("\nEnter the Element to Push : ");
    scanf("%d",&stack[top]);
    printf("\nThe Inserted element is %d",stack[top]);

 }
}

void pop()
{
 if(top==-1)
    printf("\nStack is Empty!");
 else
 {
    printf("\nThe Popped element is %d",stack[top]);
    top--;
 }
}

void display()
{
 if(top==-1)
    printf("\nStack is Empty!");
 else
 {
    printf("\nThe elements in the stacks are : ");
    for(int i=top;i>=0;i--)
    {
        printf("\n%d",stack[i]);
    }
 }
}

void peek()
{
 if(top==-1)
    printf("\nStack is Empty!");
 else
    printf("\nThe Peak element is %d",stack[top]);
}

void main()
{   int ch;
    do
    {
      printf("\nSelect an Option : \n1.Push\n2.Pop\n3.Display\n4.Peek\n5.Exit\n");
      scanf("%d",&ch);

      switch(ch)
        {
            case 1 : push();
            break;
            case 2 : pop();
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
