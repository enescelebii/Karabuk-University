#include<stdio.h>
#define size 100
void ikibuyuksayi(int[]);
int main(){
	int numbers[size],c;
	printf("Bu program girilen 10 sayidan en buyuk 2sini bulur\n10 deger giriniz\n");
	for(c=0;c<10;c++) scanf("%d",&numbers[c]);
	ikibuyuksayi(numbers);
	return 0;
}

void ikibuyuksayi(int a[]){
	int temp,buyuksayi,c;
	temp=a[0];
	buyuksayi=a[0];
	for(c=0;c<10;c++){
		if(a[c]>buyuksayi)
			temp=buyuksayi;
			buyuksayi=a[c];
	}
	printf("1.buyuksayi:%d\n2.buyuksayi:%d",buyuksayi,temp);
}

