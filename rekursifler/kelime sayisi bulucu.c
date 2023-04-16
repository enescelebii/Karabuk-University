#include<stdio.h>
int kelime_sayisi(char[]);
int i=0;								//kendim yaptımm ENES ÇELEBİ 20.03.23 10:34
int main(){
	char cumle[100];
	printf("Bu program bir cumledeki kelime sayisini rekursif fonksiyonlar ile hesaplar\nlutfen bir cumle giriniz\n\ncumle:");
	gets(cumle);
	printf("bu cumlede %d tane kelime vardir :D",kelime_sayisi(cumle));
	return 0;
}
int kelime_sayisi(char cumle[]){
	static int sayi=0;
	if(cumle[i]==NULL){						//kendim yaptımm ENES ÇELEBİ 20.03.23 10:34
		return sayi+1;
	}
	if(i==0){
		if(cumle[i+1]==' ') sayi++;
	}
	if(cumle[i-1]<123 && cumle[i-1]>96 && cumle[i]==' ' && cumle[i+1]<123 && cumle[i-1]>96) sayi++;
	i++;
	return kelime_sayisi(cumle);
}