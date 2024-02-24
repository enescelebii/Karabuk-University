#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>
#include<unistd.h>
#include<ctype.h>

#define QUEUE_SIZE 10

struct node{
    int data;
    struct node *next;
};

typedef struct{
    int cnt;
    struct node *rear;
    struct node *front;
}queue;

void initialize(queue *q){
    q->cnt = 0;
    q->rear = NULL;
    q->front = NULL;
}

typedef enum { false , true } boolean;

int isEmpty_queue(queue *q) {
    return (q->cnt == 0);
}

int isFull_queue(queue *q) {
    return (q->cnt == QUEUE_SIZE);
}

void enqueue(queue *q, int x){
    if(!isFull_queue(q)){
        struct node *temp = (struct node*)malloc(sizeof(struct node));
        temp->next = NULL;
        temp->data = x;
        if(isEmpty_queue(q)){
            q->front = q->rear = temp;
        } else {
            q->rear->next = temp;
            q->rear = temp;
        }
        q->cnt++;
    } else {
        printf("queue is full!\n");
    }
}

int dequeue(queue *q){
    int x;
    if(!isEmpty_queue(q)){
        struct node *temp  = q->front;
        x = temp->data;
        q->front = temp->next;
        free(temp);
        q->cnt--;
        return x;
    } else {
        printf("queue is empty!\n");
        return -1; 
    }
}

int main(){
    queue myQueue;
    initialize(&myQueue);

    enqueue(&myQueue, 5);
    enqueue(&myQueue, 10);
    enqueue(&myQueue, 15);

    while (!isEmpty_queue(&myQueue)){
        printf("Dequeued: %d\n", dequeue(&myQueue));
    }

    return 0;
}
