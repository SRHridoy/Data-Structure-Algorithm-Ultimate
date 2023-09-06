/*
Stack mane stup...Eta eksathe ektar opor ekta biscuit rakhar moto... notun biscuit rakhar joone opore ebong khete chaileo opor theke niye khete hobe...Niye neya ke pop ar diya k push bole...

SO, Stack LIFO---->Last in first out...

    4   5   2   3   ___     ___     ____    Top = 3

    push korle top 1 bare
    4   5   2   3    6      ___     ____   Top = 4

    pop korle top 1 kome
    4   5   2   3   ___     ___     ____    Top = 3

*/
#include<stdio.h>

#define STACK_MAX 100

typedef struct
{
    int top;
    int data[STACK_MAX];
}Stack;


void push(Stack *s, int item)
{
    if(s->top<STACK_MAX)
    {
        s->data[s->top] = item;
        s->top = s->top + 1;
    }
    else
    {
        printf("Stack is full!\n");
    }
}

int pop(Stack *s)
{
    int item;
    if(s->top == 0)
    {
        printf("Stack is empty!\n");
        return -1;
    }
    else
    {
        s->top = s->top -1 ;
        item = s->data[s->top];
    }
    return item;
}

void printStack(Stack *s)
{
    if(s->top == 0)
    {
        printf("Stack is empty!\n");
    }
    else
    {
    
        printf("The stack elements are : ");
        for (int i = 0; i <s->top ; i++)
        {
            printf("%d ",s->data[i]);
        }
        printf("\n");
    }
    
}

int main()
{
    Stack myStack;
    int item;

    myStack.top = 0;
    printStack(&myStack);

    push(&myStack, 1);
    push(&myStack, 5);
    push(&myStack, 8);
    printStack(&myStack);



    item = pop(&myStack);
    printf("%d is poped out.\n",item);
    printStack(&myStack);


    return 0;
}
