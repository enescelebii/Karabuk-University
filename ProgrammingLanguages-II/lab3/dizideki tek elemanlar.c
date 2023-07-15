#include<stdio.h>
int tekmi(int[],int);

int main(){
	int i,size;
	printf("lutfen bir dizi boyutu giriniz: ");
	scanf("%d",&size);
	int dizi[size];
	printf("lutfen dizi elemanlarini giriniz\n");
	for(i=0;i<size;i++)
	scanf("%d",&dizi[i]);
	printf("dizide %d tane tek sayi vardir",tekmi(dizi,size));
	return 0;
}
int tekmi(int dizi[],int size){
	static int x=0;
	if(size<0){
		return 0;
	}
	if(dizi[size]%2==1){
		return x++ + tekmi(dizi,size-1);
	}
	return tekmi(dizi,size-1);
}
