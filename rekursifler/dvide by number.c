#include<stdio.h>
void divide(int,int,int);
int main(){
	int low,high,d;
	printf("kucuk sayi: ");
	scanf("%d",&low);
	printf("buyuk sayi: ");
	scanf("%d",&high);
	printf("bolme sayisi: ");
	scanf("%d",&d);
	divide(low,high,d);
	return 0;
}
void divide(int low,int high,int d){
	if(low==high) return;
	if(low%d==0){ 
		printf("%d\n",low);
	}
	divide(low+1,high,d);
}
