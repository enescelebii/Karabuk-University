#include<stdio.h>
int main(){
	int n,x,a,t;
	printf("girilen sayinin karabuk sayisi olup olmadigini sogulamak icin bir deger giriniz\n");
	scanf("%d",&n);
	t=n;
	a=n%10;
	n/=10;
	if(n==0){
		printf("girdiginiz %d sayisi bir karabuk sayisidir",t);
		return 0;
	}
	for(;n>0;n/=10){
		x=n%10;
		if(x!=a){
			printf("girdiginiz sayi karabuk sayisi degildir");
			return 0;
		}
		a=x;
	}
	printf("\n");
	printf("girdiginiz %d sayisi bir karabuk sayisidir",t);
	return 0;
}
