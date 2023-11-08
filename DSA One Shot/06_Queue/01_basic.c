/*
Queue is like ticket katar sari ba line and fair game ...kew pore ese age dhukte parbe nah...jea age asbe se age kaj sarbe abar je pore asbe se sobar piche thakbe...

Front / Head indicate kore Queue er  1st e je ace ar 
Tail / Rear indicate kore Queue er last e je ace tar porer ghor...

Head = Tail mane holo Queue empty...

Ekhane insert korake bole ENQUEUE
EKhane Delete korake bole DEQUEUE

Generally, we use circular queue to save our memory...
Circular queue te Head er ager ghor faka rakha lage...tai
jodi queue size = 1000 hoi then amra 999 ta element rakhte parbo...

Circullarly, ses theke abar first e jete mod(%) use korbo...

Example :                               Here,
        4   5   2   3   _   _   _   Head/Front =0 Tail/Rear = 4
        4   5   2   3   6   _   _   Head/Front =0 Tail/Rear = 5
        _   5   2   3   6   _   _   Head/Front =1 Tail/Rear = 5 
*/

#include<stdio.h>
#define QUEUEMAX 1000

typedef struct
{
    int head;
    int tail;
    int data[QUEUEMAX+1];
}Queue;

//O(1)
void enqueue(Queue *queue,int item)
{ 
    if((queue->tail + 1) % (QUEUEMAX + 1) == queue->head)
    {
        printf("Queue is full!\n");
        return;
    }
    queue->data[queue->tail] = item;
    queue->tail = (queue->tail + 1) % (QUEUEMAX+1);
}

int  dequeue(Queue *queue)
{   
    int item;

    if(queue->head == queue->tail)
    {
        printf("The Queue is Empty!\n");
        return -1;
    }

    item = queue->data[queue->head];
    queue->head = (queue->head + 1) % (QUEUEMAX + 1);
    return item;
}
//O(1)
void printQueue(Queue *queue)
{
    printf("Head = %d and Tail = %d \n",queue->head,queue->tail);

    if(queue->head == queue->tail)
    {
        printf("The Queue is Empty!\n");
    }
    else
    {   
        printf("The Queue is : ");
        for (int i = queue->head; i < queue->tail; i = (i+1) % (QUEUEMAX + 1))
        {
            printf("%d ", queue->data[i]);
        }
        printf("\n");
    }
}

void printDequeuedItem(int item)
{
    if(item==-1)
        printf("Failed!\n");
    else
        printf("%d is dequeued from queue!\n",item);
}

int main()
{
    Queue myQueue;
    int item;

    myQueue.head = 0;
    myQueue.tail = 0;
    printQueue(&myQueue);

    enqueue(&myQueue,1);
    printQueue(&myQueue);

    enqueue(&myQueue,5);
    printQueue(&myQueue);

    item = dequeue(&myQueue);
    printDequeuedItem(item);
    printQueue(&myQueue);

    item = dequeue(&myQueue);
    printDequeuedItem(item);
    printQueue(&myQueue);

    item = dequeue(&myQueue);
    printDequeuedItem(item);
    printQueue(&myQueue);

    return 0;
}