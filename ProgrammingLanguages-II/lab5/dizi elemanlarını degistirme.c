#include<stdio.h>
void swapNUMBERS(int[],int);
void main(){
	int dizi[20];
	int *p;
	int n;
	p=dizi;
	printf("pointer ile elementlerin yerlerini degistirir\ndizi boyutu giriniz:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&dizi[i]);
	}
	swapNUMBERS(dizi,n);
}
void swapNUMBERS(int *p,int n){
	int temp;
	temp=*(p);
	*(p)=*(p+3);
	*(p+3)=*(p+1);
	*(p+1)=temp;
	for(int i=0;i<n;i++){
		printf("\n%d\n",*(p+i));
	}
}