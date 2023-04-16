#include<stdio.h>
void tablo();
void main(){
	printf("bu program rekursif fonksiyon ile carpým tablosu yazdiri\n\n");
	tablo();
}
void tablo(){
	static int sayi=1;
	int deger=0;
	if(sayi<11){
		printf("%d ---> ",sayi);
		for(int i=0;i<11;i++){						//KENDÝM YAPTIM ENES ÇELEBÝ 19.03.23 22:07
			printf("%d ",sayi*i);
		}
		printf("\n");
		sayi+=1;
		return tablo();
	}
	printf("\n	 * *\n");
	printf("	-___-");
}
