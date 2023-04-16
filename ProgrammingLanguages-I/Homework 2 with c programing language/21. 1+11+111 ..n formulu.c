#include<stdio.h>
int main(){
	int n,sum,x;
	printf("(1+11+111+1111..n) formulunu hesaplamak icin bir n degeri giriniz\n");
	scanf("%d",&n);
	for(sum=0;sum<n;){
		sum=sum*10+1;
		x+=sum;
	}
	printf("sonucunuz = %d",x-1);
	return 0;
}
