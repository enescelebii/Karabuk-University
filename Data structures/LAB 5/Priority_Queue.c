#include<stdio.h>
#define Queue_Size 10

struct Priority_Queue{
	int data[Queue_Size+1];
	int cnt;
};
typedef struct Priority_Queue pq;
void initalize(pq *p){
	p->cnt=0;
}
void swap(int *A, int *B){
	int temp = *A;
	*A = *B;
	*B = temp;
}
void insert(pq *p, int x){
	if(p->cnt == Queue_Size){
		printf("queue is FULL!!");
		return;
	}else{
		p->data[++p->cnt] = x;
		int index = p->cnt;
		while(index != 1 && p->data[index]<p->data[index/2]){
			swap(&p->data[index],&p->data[index/2]);
			index = index/2;
		}
	}
}
int deQueue(pq *p){
	
	if(p->cnt == 0)
		return 0;
	else{
		int min= p->data[1];
		p->data[1] = p->data[p->cnt--];
		int index = 1;
		while(2*index <= p->cnt && ( p->data[index] > p->data[2*index] || p->data[index] > p->data[2*index+1] ) ){
			if( 2*index+1 <= p->cnt){
				if(p->data[2*index]<p->data[2*index+1]){
					swap(&p->data[index],&p->data[2*index]);
					index = index * 2;
				}else{
					swap(&p->data[index],&p->data[2*index +1]);
					index = index * 2 + 1;
				}
			}else{
				swap(&p->data[index],&p->data[2*index]);
				index = index * 2;
				break;
			}
		}
		return min;
	}
	
}
int main(){
	int x;
	pq pq;
	initalize(&pq);
	while(1){
		scanf("%d",&x);
		if(x == -1){
			break;
		}else{
			insert(&pq,x);
		}
	}
	printf("\n\nEN KUCUK ELEMAN: %d\n\n",pq.data[1]);
	while (pq.cnt > 0)
    {
        int min = deQueue(&pq);
        printf("%d ", min);
    }
	return 0;
}
