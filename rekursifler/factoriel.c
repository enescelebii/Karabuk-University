#include<stdio.h>
double f(int);
int main(){
	int num;
	printf("faktoriel hesaplama\nlutfen bir sayi giriniz: ");
	scanf("%d",&num);
	printf("sonuc: %.0lf",f(num));
	return 0;
}
double f(int a){
	if(a<1) return 1;
	return a * f(a-1);
}