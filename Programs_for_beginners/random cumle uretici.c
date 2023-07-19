#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>
#include <stdio.h>
#include <string.h>

int main() {
	srand(time(NULL));
	int kelime_sayisi,random_kelime,x;
    char dizi[100][8] = {
        "merhaba", "dunya", "iyi", "gunler", "nasilsin", "tesekkurler", "evet", "hayir", "elma", "portakal",
        "kitap", "kalem", "masa", "sandalye", "bilgisayar", "telefon", "hava", "su", "yemek", "kahvalti",
        "ogle", "aksam", "gece", "sabah", "yol", "okul", "ogrenci", "ogretmen", "ders", "sinav", "kitaplik",
        "yazilim", "donanim", "ag", "guvenlik", "parola", "sifre", "internet", "web", "site", "mail",
        "adres", "arkadas", "aile", "anne", "baba", "kardeş", "kuzen", "dede", "nine", "hediye", "oyun",
        "top", "futbol", "basketbol", "voleybol", "golf", "kosu", "yuzme", "tenis", "sinema", "tiyatro",
        "konser", "muzik", "sarki", "dans", "resim", "sanat", "muze", "tarih", "gezi", "tatil", "yolculuk",
        "ucak", "otobus", "tren", "araba", "bisiklet", "deniz", "dag", "orman", "cicek", "agac", "gunes",
        "ay", "yildiz", "bulut", "yagmur", "kar", "ruzgar"
    };
    
    while(1){
    	printf("\nBir rastgele cumle olusturmak icin 1 e basisiniz cikmak icin 0:");scanf("%d",&x);
    	if(x==1){
    		kelime_sayisi = rand() %3 + 3;
    		for(int i=0;i<kelime_sayisi;i++){
    			random_kelime = rand() %100;
    			printf("%s ",dizi[random_kelime]);
			}
		}
		else{
			return 0;
		}
	}
    return 0;
}
