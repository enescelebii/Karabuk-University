#include<stdio.h>
void tek_veya_cift(int[],int,int);
int main(){
	int size,secenek;
	printf("bu program bir dizideki tek veya cift sayilari yazar\nlutfen bir sayi dizisi giriniz\ndizi boyutu: ");
	scanf("%d",&size);
	int numbers[size];
	for(int a=0;a<size;a++){
		printf("%d eleman --> ",a+1);
		scanf("%d",&numbers[a]);
	}
	printf("tek sayilar icin 1 e basin cift sayilar icin 2 yi tuslayin: ");
	scanf("%d",&secenek);
	tek_veya_cift(numbers,size,secenek);
	return 0;
}
void tek_veya_cift(int num[],int size,int secenek){
	if(secenek==1){
		if(size>0 && num[size]%2==1){
			printf("%d\n",num[size]);
		}
	}else return printf("\nYANLIS SECENEK");
	if(secenek==2){
		if(size>0 && num[size]%2==0){
			printf("%d\n",num[size]);
		}
	}else return printf("\nYANLIS SECENEK");
	tek_veya_cift(num,size-1,secenek);
}