#include<stdio.h>                   // KENDÝM YAPTIM ENES ÇELBÝ
#include<math.h>
int sum_of_low_to_high(int,int);
void main(){
	int low,high;
	printf("Bu program low sayisindan high sayisina kadar toplama iþlemi yapar rekursif fonksiyonlar ile\nlutfen bir LOW degeri ve HIGH degeri giriniz\n");
	scanf("%d",&low);
	scanf("%d",&high);
	printf("toplam sonucu: %d",sum_of_low_to_high(low,high));
}
int sum_of_low_to_high(int low,int high){
	static int sum=0;
	if(low!=high){
		sum+=low;
		return sum_of_low_to_high(low+1,high);
	}
	return sum+high;
}
