#include<stdio.h>
int main(){
	char kelime1[50],kelime2[50];
	int value;
	printf("girilen 2 kelimenin ayni olup olmadigini kontrol eden eger ayni degil ise hangi kelimenin daha uzun oldugunu bulan program\n");
	printf("1.kelime:");
	gets(kelime1);	
	printf("2.kelime:");
	gets(kelime2);
	value=strcmp(kelime1,kelime2);
	if(value==0){
		printf("iki kelimede ayni");
	}else if(value>0){
		printf("kelimeler ayni degil ilk kelime daha uzun");
	}else{
		printf("kelimeler ayni degil ikinci kelime daha uzun");
	}
	return 0;
}