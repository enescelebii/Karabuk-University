#include<stdio.h>
int main(){
	int n,t,f;
	printf("ilk ve son basamaktaki sayiyi ogrenmek icin bir sayi giriniz\n");
	scanf("%d",&n);
	f=n%10;
	for(;n>0;){
		t=n;
		n/=10;
	}
	printf("%d   %d",t,f);
	return 0;
}
