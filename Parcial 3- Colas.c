
#include <stdio.h>
#define QUEUE_CAPACITY 10


struct queue
{
    int data[QUEUE_CAPACITY+1];
    int start;
    int end;
    int count;
};

void setupQueue(struct queue *q);
int isQueueFull(struct queue q);
int isQueueEmpty(struct queue q);
int dequeue(struct queue *q, int *value);
int enqueue(struct queue *q, int value);
void printQueue(struct queue q);

int main ()
{
    struct queue q;

    setupQueue(&q);

    enqueue(&q,10);
    enqueue(&q,11);
    enqueue(&q,12);
    enqueue(&q,13);
    enqueue(&q,14);
    enqueue(&q,15);
    enqueue(&q,16);
    enqueue(&q,17);

    printQueue(q);



}

void setupQueue(struct queue *q)
{
    q->start =0;
    q->end =0;
    q->count =0;
}

int isQueueFull(struct queue q)
{
    if ((q.end +1) % (QUEUE_CAPACITY +1) == q.start)

        return 1;

    return 0;
}

int isQueueEmpty(struct queue q)
{
    if(q.start == q.end)

        return 1;

    return 0;
}

int dequeue(struct queue *q, int *value)
{

    int r=0;
    if(q->start != q->end) //si la cola tiene datos o si no está vacia
    {
        *value = q->data[q->start];
        q->start ++;

        if(q->start >= QUEUE_CAPACITY + 1 )

            q->start = 0;

        r=1;
    }

    return r;
}

int enqueue(struct queue *q, int value)
{

    int r=0;

    if(isQueueFull(*q) == 0)
    {
        q->data[q->end] = value;
        q->end ++;

        if(q->end >= QUEUE_CAPACITY +1)

            q->end = 0;

        r=1;
    }
    return r;
}

void printQueue(struct queue q)
{
    int value;
    while (dequeue(&q, &value) == 1)
    {
        printf(" %d \n", value);
    }
}
