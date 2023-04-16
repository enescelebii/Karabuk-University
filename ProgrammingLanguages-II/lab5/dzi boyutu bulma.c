#include<stdio.h>
void main(){
	char dizi[50];
	char *ch;
	int sum=0;
	printf("dizi boyutu bulan pointer\ndizi giriniz:");
	gets(dizi);
	ch=dizi;
	while(*ch != NULL){
		sum++;
		ch++;
	}
	printf("dizinin uzunlugu : %d",sum);
}