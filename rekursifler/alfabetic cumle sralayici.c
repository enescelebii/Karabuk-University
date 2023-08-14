#include<stdio.h>
char char_bubblesort(char[],int,int,int);
int main(){							// KENDİM YAPTIM ENES ÇELEBİ
	char cumle[100];				//GUNLERCE UGRASTIM COK EMEK VERDİM KAFA PATLATTIM UMARIM CALISIRRRR calıstı aq
	int adet=0;
	printf("Bu program cumleyi rekursif fonksiyonlar ile alfabetik siralar\nlutfen bir cumle giriniz\n\ncumle:");
	gets(cumle);
	printf("\n\nsonuc:");
	for(;cumle[adet]!=NULL;adet++);
	char_bubblesort(cumle,adet,0,0);// i ve j degerleri static olucak oyuzden fonksiyona parametre olarak göndermek istedim
	return 0;
}
char char_bubblesort(char cumle[], int adet, int i, int j){
    char temp=0;
    if (i == adet-1){
        puts(cumle);			//KENDİM YAPTIM ENES ÇELEBİ 20.03.23 15:03
        return;
    }
    if (j == adet-i-1){
        return char_bubblesort(cumle, adet, i+1, 0);// burada ise eger butun elemanlar j ile taranır ise i ile diğer elemana geçiyoruz
    }
    if (cumle[j] > cumle[j+1]){ // burda bir sonraki eleman ile sınıyoruz
        temp = cumle[j];
        cumle[j] = cumle[j+1];  //burda swap yapıyoruz
        cumle[j+1] = temp;
    }
    return char_bubblesort(cumle, adet, i, j+1); //j sürekli bir sonraki elemanı sınamak için artıyor
}
/*void bubbleS ort(char dizi[], int adet_mutlak){ 
  int temp = 0,i,j;
  for( i = 0; i < adet_mutlak-1; i++){
    for( j = 0; j < adet_mutlak-i-1; j++){    // bunu rekürsif yapcaz
      if(dizi[j] > dizi[j+1]){
        temp = dizi [j];
        dizi[j] =dizi[j+1];
        dizi[j+1] = temp; 
      }
    }
  }
  puts(dizi); by enescelebi
}*/
