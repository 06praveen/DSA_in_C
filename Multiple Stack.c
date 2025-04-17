#include<stdio.h>
#define N 100
int stack[N];
int top1=-1;
int top2=N;

void push1(int x)
{
    if(top1+1==top2)
    {
        printf("\nStack 1 is Full!");
    }
    else
    {
        top1++;
        stack[top1]=x;
        printf("\nPushed element in Stack 1 is : %d",stack[top1]);
    }
}

void push2(int x)
{
    if(top1+1==top2)
    {
        printf("\nStack 2 is Full!");
    }
    else
    {
        top2--;
        stack[top2]=x;
        printf("\nPushed element in Stack 2 is : %d",stack[top2]);
    }
}

void pop1()
{
    if(top1==-1)
    {
        printf("\nStack 1 is Empty!");
    }
    else
    {
        printf("\nPop element from the Stack 1 is : %d",stack[top1]);
        top1--;
    }
}

void pop2()
{
    if(top2==N)
    {
        printf("\nStack 2 is Empty!");
    }
    else
    {
        printf("\nPop element from the Stack 2 is : %d",stack[top2]);
        top2++;
    }
}

void main()
{
    push1(18);
    push1(7);
    push1(45);
    push2(1);
    push2(10);
    push2(93);
    pop1();
    pop1();
    pop1();
    pop1();
    pop2();
    pop2();
    pop2();
    pop2();
}
