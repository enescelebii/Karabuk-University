#include<stdio.h>  
#include<math.h>                    //KENDÝM YAZDÝM ENES ÇELEBÝ
int ekok(int,int);
int main(){
	int num1,num2;
	printf("bu program iki sayinin ekokunu rekursif fonksiyon ile bulur\nlutfen 2 sayi giriniz: ");
	scanf("%d\n",&num1);
	scanf("%d",&num2);
	printf("%d ve %d sayilarinin ekoku: %d ",num1,num2,ekok(num1,num2));
	return 0;
}
int ekok(int num1 , int num2){
	static int bolen=1;
	if(bolen % num1==0 && bolen % num2==0){
		return bolen;
	}
	else{
		bolen+=1;
		ekok(num1,num2);
	}
}
