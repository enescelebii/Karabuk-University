#include <stdio.h>        //DERSTE YAPTIK
int toplam(int);
int main(){
	int sayi,result;
	printf("bir sayi giriniz\n");
	scanf("%d",&sayi);
	printf("\n");
	printf("1 den %d sayisina kadar toplam sayilari bulan fonksiyon\n",sayi);
	result=toplam(sayi);
	printf("sonuc:%d",result);
	return 0;
}

int toplam(int sayi){
	if(sayi != 0)
	return (toplam(sayi-1)+sayi);
	else
		return sayi;
}
