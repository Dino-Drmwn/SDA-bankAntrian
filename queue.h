#ifndef QUEUE_H
#define QUEUE_H

#define MAX_QUEUE 10

typedef struct {
    int data[MAX_QUEUE];
    int front, rear;
} Queue;

void initQueue(Queue *q);
void enqueue(Queue *q, int value);
int dequeue(Queue *q);
void printQueue(Queue *q);
int isQueueEmpty(Queue *q);
int isQueueFull(Queue *q);

#endif

