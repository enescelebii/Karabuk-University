#include<stdio.h>
struct ogrenci_bilgileri{
	char isim;
	char soyisim;
	int yas,ogrenciNum;
};
int n;
typedef struct ogrenci_bilgileri info;
info bilgiAL(info *ptr,int);
void bilgiYAZ(info *ptr,int);
void main(){
	info *ptr;
	printf("Ogrenci sayisi giriniz:");
	scanf("%d",&n);
	info ogrenciler[n];
	ptr=&ogrenciler[0];
	for(int i=0;i<n;i++){
		bilgiAL(ptr+i,i);
	}
	for(int i=0;i<n;i++){
		bilgiYAZ(ptr+i,i);
	}
}
info bilgiAL(info *ptr,int i){
	printf("\n%d.ogrenci:",i+1);
	printf("\nisim:");
	scanf("%s",&ptr->isim);
	printf("Soyisim:");
	scanf("%s",&ptr->soyisim);
	printf("Yas:");
	scanf("%d",&ptr->yas);
	printf("Ogrenci numarasi:");
	scanf("%d",&ptr->ogrenciNum);
}
void bilgiYAZ(info *ptr,int i){
	printf("\n%d.ogrenci bilgileri:",i+1);
	printf("\nisim:%s\nsoyisim:%s\nyas:%d\nogrenci numarasi:%d\n---------",ptr->isim,ptr->soyisim,ptr->yas,ptr->ogrenciNum);
}