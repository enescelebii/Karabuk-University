#include<stdio.h>
#include<stdlib.h>
void main(){
	printf("girilen cumlede girilen kelimenin oldgunu ve o kelimenin hangi indiste oldugunu gosteren program\n");
	char *cumle,*kelime;
	int size,cumlesize=0,kelimesize=0,c;
	cumle=(char*)calloc(cumle,sizeof(char));
	kelime=(char*)calloc(kelime,sizeof(char));
	printf("Bir cumle giriniz:");
	for(int i=0;1;i++,cumlesize++){
		*(cumle+i) = getch();
		if(*(cumle+i)==13)
			break;
		putch(*(cumle+i));
		cumle = (char*)realloc(cumle,(i+1)*sizeof(char));
	}
	printf("\nbir kelime giriniz:");
	for(int i=0;1;i++,kelimesize++){
		*(kelime+i) = getch();
		if(*(kelime+i)==13)
			break;
		putch(*(kelime+i));
		kelime = (char*)realloc(kelime,(i+1)*sizeof(char));
	}
	for(int i=0;i<cumlesize-kelimesize+1;i++){
		for(int a=0,c=i;a<kelimesize;a++,c++){
			if(*(kelime+a)==*(cumle+c)){
			}
			else{
				break;
			}
			if(a==kelimesize-1){
				printf("\n\n***Cumlede bu kelime Bulunmaktadir***");
				return;
			}
		}
	}
	printf("\nKelime Bulunmamaktadir");
}