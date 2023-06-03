#include<stdio.h>
#include<stdlib.h>
struct node{
	char isim[50];
	int numara,puan;
	struct node *next;
};
typedef struct node node;
node *head,*tail,*newnode,*p;
void creatnode(){
	if(head == NULL && tail == NULL){
		newnode=malloc(sizeof(node));
		head = newnode;
		newnode->next = NULL;
		tail = newnode;
	}
	else{
		newnode->next = malloc(sizeof(node));
		newnode = newnode->next;
		tail = newnode;
	}
	printf("isim:");scanf("%s",newnode->isim);
	printf("numara:");scanf("%d",&newnode->numara);
	printf("puan:");scanf("%d",&newnode->puan);
	newnode->next = NULL;
}
void listnodes(){
	p = head;
	while(p != NULL){
		printf("isim:%-10s",p->isim);
		printf("numara:%-5d",p->numara);
		printf("puan:%-5d\n",p->puan);
		p = p->next;
	}
}
int main(){
	int secim;
	printf("bu program txt dosyasi ile veri depolamasi yapar\n");
	while(1){
		printf("Secim yapiniz [1-5]:\n");
		printf("1- create node\n"
			   "2- list nodes\n"
			   "3- exit\n");
		scanf("%d", &secim);
		switch(secim){
			case 1:
				creatnode();
				break;
			case 2:
				listnodes();
				break;
			case 3:
				exit(0);
		}
	}
	return 0;
}