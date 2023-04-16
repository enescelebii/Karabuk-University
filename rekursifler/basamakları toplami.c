#include <stdio.h>
int basamaksayilaritopla(int);
int main(){
	int sayi,sonuc;
	printf("basamaklarini toplamak icin bir sayi giriniz\n");
	scanf("%d",&sayi);
	sonuc=basamaksayilaritopla(sayi);
	printf("sonuc: %d",sonuc);
	return 777;
}

int basamaksayilaritopla(int sayi){
	if(sayi != 0){
		return sayi%10 + basamaksayilaritopla(sayi/10);
	}
	return 0;
}
