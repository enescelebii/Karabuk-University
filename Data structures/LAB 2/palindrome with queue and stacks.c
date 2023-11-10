#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>		
#include <string.h>
#define stack_size 10
#define queue_size 10

struct node {
    int data;
    struct node *next;
};


typedef struct {
    struct node *top;
    int cnt;
}stack;

typedef struct queue{
	struct node *front,*rear;
	int cnt;
}queue;


void push(stack *stk, int number);
int pop(stack *stk);
int isFull(stack *stk);
int isEmpty(stack *stk);
void initialize(stack *stk);

void enQueue(queue *q,int x);
int deQueue(queue *q);
int qfull(queue *q);
int qempty(queue *q);
void qinitialize(queue *q);

int main(){
	queue *q;
	stack *stk;
	char str[100];
	int i = 0;
	initialize(stk);
	qinitialize(q);
	gets(str);
	while(i<strlen(str)){
		if(isalpha(str[i])){
			push(stk,tolower(str[i]));
			enQueue(q,tolower(str[i]));
		}i++;
	}
	while(!qempty(q)){
		if(pop(stk) != deQueue(q)){
			printf("\nNot palindrome!!");
			exit(0);
		}
	}
	printf("\nPALINDROME");
	return 0;
}


int isEmpty(stack *stk) {
    return (stk->cnt == 0);
}

int isFull(stack *stk) {
    return (stk->cnt == stack_size);
}

void push(stack *stk, int x) {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = stk->top; // bir önceki elemanı bağlıyoruz
    stk->top = temp; // temp değeri en başa geliyor
    stk->cnt++;
}

int pop(stack *stk) {
    int x = stk->top->data;
    struct node *temp = stk->top; // pop yapacağımız eleman
    stk->top = stk->top->next; // top bir öncekine kayıyor
    stk->cnt--;
    free(temp);
    return x;
}

void initialize(stack *stk) {
    stk->cnt = 0;
    stk->top = NULL;
}

void enQueue(queue *q,int x){
	if(qfull(q)){
		printf("queue is full");
		return;
	}else{
		struct node *temp = (struct node*)malloc(sizeof(struct node));
		temp->data = x;
		if(qempty(q)){
			q->front = q->rear = temp;
		}else{
			q->rear->next = temp;
			q->rear = temp;
		}
	}
	q->cnt++;
}
int deQueue(queue *q){
	if(qempty(q)){
		printf("queue is empty");
		return 0;
	}else{
		struct node *temp = q->front;
		int x = temp->data;
		q->front = q->front->next;
		free(temp);
		q->cnt--;
		return x;
	}
}
int qfull(queue *q){
	if(q->cnt == queue_size)
		return 1;
	else
		return 0;
}
int qempty(queue *q){
	if(q->cnt == 0)
		return 1;
	else
		return 0;
}
void qinitialize(queue *q){
	q->cnt = 0;
	q->front = NULL;
	q->rear = NULL;
}