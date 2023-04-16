#include<stdio.h>

int kitleindeks(float,float);

int main(){
	float boy,kilo;
	printf("Vucut kitle indeksini hesaplamak icin boy ve kilo giriniz\n\n");
	printf("Boyunuz:");
	scanf("%f",&boy);
	printf("Kilonuz:");
	scanf("%f",&kilo);
	switch(kitleindeks(boy,kilo)){
		case(1):
			printf("ZAYIF");
			break;
		case(2):
			printf("NORMAL");
			break;
		case(3):
			printf("KILOLU");
			break;
		case(4):
			printf("OBEZ");
			break;
	}
	printf(" indekese sahipsiniz");
	return 0;
}

int kitleindeks(float boy , float kilo){
	float index;
	int puan;
	index=kilo/(boy*boy);
	if(index>30){
		return 4;
	}
	if(index>25){
		return 3;
	}
	if(index>18){
		return 2;
	}
	return 1;
}
