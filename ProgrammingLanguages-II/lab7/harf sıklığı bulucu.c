#include<stdio.h>
#include<stdlib.h>
int main(){
	char *cumle;
	int i=0;
	int miktar;
	printf("cumle icersinde harflerin sikligini bulan program");
	printf("Bir cumle giriniz:");
	cumle = (char*)malloc(sizeof(char));
	for(;1;i++){
		*(cumle+i) = getch();
		if(*(cumle+i)==13)
			break;
		putch(*(cumle+i));
		cumle = (char*)realloc(cumle,(i+1)*sizeof(char));
	}
	printf("\n");
	for(int harf=97 , miktar=0;harf<123;harf++){
		for(int i=0;*(cumle+i)!=NULL;i++){
			if(*(cumle+i)==harf){
				miktar++;
			}
		}
		if(miktar!=0)
		printf("%c=%d ",harf,miktar);
		miktar=0;
	}
	free(cumle);
	return 0;
}