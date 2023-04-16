#include<stdio.h>
int main(){
	int n,x,sum;
	printf("ters cevirmek icin bir deger giriniz\n");
	scanf("%d",&n);
	for(;n>0;){
		x=n%10;
		sum=sum*10+x;
		n/=10;
	}
	printf("%d",sum);
	return 0;
}
