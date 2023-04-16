#include<stdio.h>
int main(){
	int num,c=1;
	printf("faktorieli alinacak bir sayi giriniz\n");
	scanf("%d",&num);
	for(num=num;num>0;num--){
		c*=num;
	}
	printf("%d",c);
	return 0;
}
