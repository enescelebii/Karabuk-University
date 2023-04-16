#include<stdio.h>             // KENDÝM YAPTÝM ENES ÇELEBÝ
#include<math.h>
int mukemmelsayi(int);
int main(){
	int num;
	printf("bu program mukemmel sayilari rekursif fonksiyon kullanarak bulur\nlutfen bir sayi giriniz: ");
	scanf("%d",&num);
	if(mukemmelsayi(num)==num){
		printf("\n%d sayisi mukemmel bir sayidir",num);
	}
	else{
		printf("\nMUKEMMEL DEGILDIR");
	}
	return 0;
}
int mukemmelsayi(int num){
	static int bolen=9999;
	if(bolen>0){
		if(bolen==num) bolen--;
		if(num%bolen==0){
			return (bolen--) + mukemmelsayi(num);
		}
		else {
			bolen--;
			return mukemmelsayi(num);
		}
	}
	return 0;
}
