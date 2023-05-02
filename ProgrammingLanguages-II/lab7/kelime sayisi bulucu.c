#include<stdio.h>
#include<stdlib.h>
int main(){
	char *cumle;
	int kelime_sayisi=0;
	printf("cumle icersinde kac kelime oldugunu bulan program");
	printf("Bir cumle giriniz:");
	cumle = (char*)malloc(sizeof(char));
	for(int i=0;1;i++){
		*(cumle+i) = getch();
		if(*(cumle+i)==13)
			break;
		putch(*(cumle+i));
		cumle = (char*)realloc(cumle,(i+1)*sizeof(char));
	}
	for(int i=0;*(cumle+i)!=NULL;i++){
		if(*(cumle+i)==32)
			kelime_sayisi++;
	}
	printf("\nkelime sayisi:%d",kelime_sayisi+1);
}