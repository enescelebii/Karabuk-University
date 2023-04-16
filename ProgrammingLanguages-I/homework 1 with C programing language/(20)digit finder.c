#include<stdio.h>
int main(){
	int c,n;
	printf("basamak sayisini ogrenmek icin bir sayi giriniz\n");
	scanf("%d",&n);
	for(;n>0;c++){
		n/=10;
	}
	printf("%d",c);
	return 0;
}
