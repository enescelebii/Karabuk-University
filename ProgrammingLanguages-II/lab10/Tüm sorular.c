#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int number;
	struct node* next;
}node;

void add_node(node **head_ptr,int num){
	node * new_node=malloc(sizeof(node));
	new_node->number=num;
	new_node->next=NULl;
	if(*head_ptr==NULL){
		*head_ptr = new_node;
		return;
	}
	if(num%2==1){
		new_node->next= *head_ptr;
		*head_ptr=new_node;
	}
	else{
		node* current = *head_ptr;
		while(current->next!=NULL){
			current=current->next;
		}
		current->next=new_node;
	}
}
void print_list(node *headd){
	node* current = headd;
	printf("*********\n\nList-Values: ");
	while(current!=NULL){
		printf("%d ",current->number);
		current=current->next;
	}
	printf("\n");
}
node* cut_last_add_head(node*headd){
	if(headd==NULL || headd->next==NULL)
		return 0;
	node* q=NULL;
	node* p=headd;
	while(p->next!=NULL){
		q=p;
		p=p->next;
	}
	//p listede son eleman oluyor
	q->next=NULL;
	p->next=headd;
	headd=p;
	return headd;
}
void delete_middle_node(node **head_ptr){
	if(*head_ptr==NULL || (*head_ptr)->next==NULL)
		return;
	node* slow/*p*/= *head_ptr;
	node* fast= *head_ptr;
	node* q= NULL;
	while(fast!=NULL&&fast->next!=NULL){
		fast=fast->next->next;
		q=slow;
		slow=slow->next;
	}
	q->next=slow->next;
	free(slow);
}
void swap_last_and_head(node** head_ptr){
	if(*head_ptr==NULL || (*head_ptr)->next==NULL)
		return;
	node* q=NULL;
	node* p=*head_ptr;
	while(p->next!=NULL){
		q=p;
		p=p->next;
	}
	q->next=*head_ptr;
	p->next=(*head_ptr)->next;
	(*head_ptr)->next=NULL;
	*head_ptr=p;
}
node* cut_first_add_last(node*headd){
	node* p=headd;
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=headd;
	headd = headd->next;
	p->next->next=NULL;
	return headd;
}
int main(){
	int selection,num;
	node *head=NULL;
	while(1){
		printf("\n***************\n");
		printf(
		"1-Add node"
		"\n2-List Nodes"
		"\n3-Sonu basa koy"
		"\n4-Ortadaki elemani sil"
		"\n5-Swap last and head"
		"\n6-cut fist add last"
		"\n");
		printf("\nSecim yapiniz [1-6]:");
		scanf("%d",&selection);
		switch(selection){
			case 1:
				printf("Enter a number:");
				scanf("%d",&num);
				add_node(&head,num);
				print_list(head);
				break;
			case 2:
				print_list(head);
				break;
			case 3:
				head=cut_last_add_head(head);
				print_list(head);
				break;
			case 4:
				delete_middle_node(&head);
				print_list(head);
				break;
			case 5:
				swap_last_and_head(&head);
				print_list(head);
				break;
			case 6:
				head=cut_first_add_last(head);
				print_list(head);
				break;
		}
	}
}