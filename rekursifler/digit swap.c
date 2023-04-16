#include<stdio.h>                   // KENDÝM YAPTIM ENES ÇELBÝ
#include<math.h>
int digit_swap(int);
void main(){
	int girilen_o_muthis_sayi;
	printf("bu program girilen sayinin rakamlarini ters cevirir tabikide rekursif fonksiyonlarla beraber\nsayi girin lutfen biktim aritk askjfbnja\n");
	scanf("%d",&girilen_o_muthis_sayi);
	printf("sonuc: %d",digit_swap(girilen_o_muthis_sayi));
}
int digit_swap(int girilen_o_muthis_sayi){
	int x;
	static int sum=0;
	if(girilen_o_muthis_sayi>0){
		x=girilen_o_muthis_sayi%10;
		sum=sum*10+x;
		return digit_swap(girilen_o_muthis_sayi/10);
	}
	return sum;
}
