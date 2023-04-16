#include<stdio.h>
#include<stdio.h>
void main(){
	int *dizi,boyut,yeni_boyut;
	printf("Dizi boyutu giriniz: ");
	scanf("%d",&boyut);
	
	dizi = (int*)malloc(boyut*sizeof(int));
	
	for(int i=0;i<boyut;i++){
		printf("%d. eleman: ",i+1);
		scanf("%d",(dizi+i));
	}
	printf("Dizinin yeni boyutu: ");
	scanf("%d",&yeni_boyut);
	
	dizi = (int*)realloc(dizi,yeni_boyut*sizeof(int));
	for(int i=boyut;i<yeni_boyut;i++){
		printf("%d. eleman: ",i+1);
		scanf("%d",(dizi+i));
	}
	printf("Dizinin son hali: \n");
	for(int i=0;i<yeni_boyut;i++){
		printf(" -%d-",*(dizi+i));
	}
}