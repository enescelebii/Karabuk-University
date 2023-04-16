#include<stdio.h>
#include<stdlib.h>
int main(){
	char *isim;
	int i=0;
	char sonuc[20];
	printf("Adiniz soyadiniz:");
	isim = (char*)malloc(1*sizeof(char));
	while(1){
		*(isim+i) = getch();
		if(*(isim+i)==13)
			break;
		putch(*(isim+i));
		i++;
		isim = (char*)realloc(isim,(i+1)*sizeof(char));
	}
	printf("\n");
	strcpy(sonuc,isim);
	puts(sonuc);
	return 0;
}