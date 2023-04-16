#include<stdio.h>
#define size 7
int main(){
	float a[size];
	float toplam,ortalama;
	int i;
	printf("BU PROGRAM 8 ELEMANIN ORTALAMASINI BULUR\n\n");
	for(i=0;i<=size;i++){
		printf("%d. sayi:",i);
		scanf("%f",&a[i]);
		toplam+=a[i];
		ortalama=toplam/i;
	}
	printf("ortalama:%f",ortalama);
	return 0;
}
