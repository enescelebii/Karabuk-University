#include<stdio.h>  
#include<math.h>                    //KENDİM YAZDİM ENES ÇELEBİ
int armstrong(int);
int main(){
	int num;
	printf("bu program armstrong sayisini rekürsif fonksiyon ile bulur\nlutfen bir sayi giriniz: ");
	scanf("%d",&num);
	if(armstrong(num)==num){
		printf("\n%d sayisi bir armstrong sayisidir\n",num);
	}
	else {
		printf("\nARMSTRONG DEGILDIR");
	}
	return 0;
}

int armstrong(int num){
	if(num>0){
		return pow(num%10,3) + armstrong(num/10);
	}
	return 0;
}
