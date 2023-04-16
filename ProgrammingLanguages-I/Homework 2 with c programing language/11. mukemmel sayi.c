#include<stdio.h>
int main(){
	int n,x,sum;
	printf("girdiginiz sayi mukemmel olup olmadigini ogrenmek icin bir deger giriniz\n");
	scanf("%d",&n);
	for(x=n-1;x!=1;x--){
		if(n%x==0){
			sum+=x;
		}
	}
	if(sum==n){
		printf("girdiginiz sayi bir mukemmel sayi");
	}
	else{
		printf("girdiginiz sayi bir mukemmel sayi degildir");
	}
	return 0;
}
