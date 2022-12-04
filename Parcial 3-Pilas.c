#include <stdio.h>

#define STACK_CAPACITY 10

typedef struct
{
    int stack[STACK_CAPACITY];
    int top;
    int size;

}STACK;

void setupStack(STACK *s);
int isStackEmpty(STACK s);
int isStackFull(STACK s);

int push(STACK *s, int );
int pop(STACK *s, int *);
void printStack(STACK s);

int main()
{
    STACK stack;

    setupStack(&stack);



    push(&stack,1);
    push(&stack,2);
    push(&stack,3);
    push(&stack,4);
    push(&stack,5);
    push(&stack,6);
    push(&stack,7);
    push(&stack,8);
    push(&stack,9);
    push(&stack,10);

    printStack(stack);

}

void setupStack(STACK *s)
{
    s->top = -1;
    s->size = 0;
}

int isStackEmpty(STACK s)
{
    if(s.top == -1)

        return 1;

    return 0;
}

int isStackFull(STACK s)
{
    if(s.top == STACK_CAPACITY -1)

        return 1;

    return 0;
}

int push(STACK *s, int value)
{
    if(isStackFull(*s) == 0)
    {
        s->top ++;

        s->stack[s->top] = value;

        return 1;


    }

    return 0;
}

int pop(STACK *s, int *value)
{
    if(isStackEmpty(*s) == 0)
    {


        *value = s->stack[s->top];

        s->top --;



        return 1;
    }

    return 0;
}

void printStack(STACK s)
{
    int dato;

    while(pop(&s, &dato) == 1)

        printf("%d \n", dato);
}
