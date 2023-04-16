#include <stdio.h>

int main(){
	int vize,final,ogrencino,puan;
	printf("ogrenci numarasi giriniz\n");
	scanf("%d" , &ogrencino);
	printf("vize notu giriniz\n");
	scanf("%d" , &vize);
	printf("final notu giriniz\n");
	scanf("%d" , &final);
	puan =vize*0.4 + final*0.6;
	printf("ogrenci numaraniz\n");
	printf("%d\n" , ogrencino);
	printf("yil sonu notunuz\n");
	printf("%d" , puan);
	return 0;
}
