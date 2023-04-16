#include<stdio.h>
#define size 100

int hesapla(int , int);

int main(){
	int ogrSayisi,puan;
	printf("Lutfen ogrenci sayisi giriniz:");
	scanf("%d",&ogrSayisi);
	printf("Gecme notu giriniz:");
	scanf("%d",&puan);
	printf("Kalan ogrenci sayisi:%d",hesapla(ogrSayisi,puan));
	return 0;
}

int hesapla(int ogrenci , int puan){
	int a[size],c,x,sum;
	for(c=0,x=0; c < ogrenci ; c++){
		printf("%d.ogrencinin notu:",c+1);
		scanf("%d",&a[c]);
		if(a[c]<puan){
			x++;
		}
		sum+=a[c];
	}
	printf("ogrencilerin ortalamasi:%d\n",sum/ogrenci);
	return (x);
}
