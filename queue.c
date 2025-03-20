#include <stdio.h>
#include "Queue.h"

void initQueue(Queue *q) {
    q->front = 0;
    q->rear = -1;
}

void enqueue(Queue *q, int value) {
    if (!isQueueFull(q)) {
        q->data[++(q->rear)] = value;
        printf("Nomor antrian %d telah diambil.\n", value);
    } else {
        printf("Queue penuh! Tidak dapat menambahkan antrian baru.\n");
    }
}

int dequeue(Queue *q) {
    if (!isQueueEmpty(q)) {
        return q->data[(q->front)++];
    }
    return -1; // Queue kosong
}

void printQueue(Queue *q) {
    if (!isQueueEmpty(q)) {
        printf("Antrian saat ini: ");
        
        int i;  // Deklarasikan variabel di luar loop
        for (i = q->front; i <= q->rear; i++) {
            printf("%d ", q->data[i]);
        }

        printf("\n");
    } else {
        printf("Antrian kosong.\n");
    }
}

int isQueueEmpty(Queue *q) {
    return q->rear < q->front;
}

int isQueueFull(Queue *q) {
    return q->rear == MAX_QUEUE - 1;
}

