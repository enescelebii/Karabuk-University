#include<stdio.h>
int spaces=15;
int tree(int,int);
void main(){								//enes celebi 29.03.23 01:42
	printf("----kind of tree----\n\n");
	tree(1,1);
}
int tree(int sector,int amount){
	if(sector==1){
		if(amount==6){
			return tree(2,1);
		}
		for(int a=0;a<spaces-amount;a++){
			printf(" ");
		}
		for(int i=0;i<amount;i++){
			printf("* ");
		}
		printf("\n");
		return tree(1,amount+1);
	}
	else if(sector==2){
		if(amount==10){
			return tree(3,1);
		}
		for(int a=0;a<spaces-amount;a++){
			printf(" ");
		}
		for(int i=0;i<amount;i++){
			printf("* ");
		}
		printf("\n");
		return tree(2,amount+1);
	}
	else if(sector==3){
		for(int a=0;a<spaces-1;a++){
			printf(" ");
		}
		while(amount<4){
			printf("|");
			printf("\n");
			return tree(3,amount+1);
		}
	}
}