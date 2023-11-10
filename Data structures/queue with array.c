#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>
#include<unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define queue_size 3

typedef struct {
    int rear,front;
    int data[queue_size];
} queue;

void enQueue(queue *q, int number);
int deQueue(queue *q);
bool qfull(queue *q);
bool qempty(queue *q);
void qinitalize(queue *q);

int main() {
    int selection, number;
    queue q_instance;
    queue *q = &q_instance;
    qinitalize(q);

    while (1) {
        printf("1-enQueue an item\n"
               "2-deQueue an item\n"
               "3-is queue full?\n"
               "4-is queue empty?\n"
               "5-reset\n"
               "6-Exit\n->");
        scanf("%d", &selection);
        switch (selection) {
        case 1:
            if (qfull(q)) {
                system("cls");
                printf("queue is full\n");
                break;
            } else {
                printf("Enter a number:");
                scanf("%d", &number);
                enQueue(q, number);
            }
            break;
        case 2:
            if (qempty(q)) {
                system("cls");
                printf("queue is empty\n");
                break;
            } else {
                printf("Number : %d\n", deQueue(q));
            }
            break;
        case 3:
            if (qfull(q)) {
                system("cls");
                printf("YES! queue is FULL\n");
            } else {
                system("cls");
                printf("NO! queue is not FULL\n");
            }
            break;
        case 4:
            if (qempty(q)) {
                system("cls");
                printf("YES! queue is EMPTY\n");
            } else {
                system("cls");
                printf("NO! queue is not EMPTY\n");
            }
            break;
        case 5:
            system("cls");
            qinitalize(q);
            printf("queue successfully qinitalized...\n");
            break;
        case 6:
            exit(0);
        }
    }
    return 0;
}

bool qempty(queue *q) {
    return (q->front == q->rear+1  ? true : false); //q->rear +1;
}

bool qfull(queue *q) {
    return (q->rear == queue_size -1 ? true : false);
}

void enQueue(queue *q, int x) {
	if(qempty){
    	q->data[++q->rear] = x;
		q->front = 0;  		
	}else
	q->data[++q->rear] = x;
}

int deQueue(queue *q) {
    int x = q->data[q->front++];
    return x;
}

void qinitalize(queue *q) {
    q->rear = q->front =  -1;
}
