#include<stdio.h>
int carpma(int,int);
int main(){
	int num1,num2;
	printf("rekursif fonksiyon ile carpma islemi\nlutfen iki sayi giriniz\n");
	printf("1.sayi:");
	scanf("%d",&num1);
	printf("2.sayi:");
	scanf("%d",&num2);
	printf("sonuc: %d",carpma(num1,num2));
	return 0;
}
int carpma(int num1,int num2){
	static int a=0;
	if(a==num2){
		return 0;
	}
	a++;
	return num1 + carpma(num1,num2);
}