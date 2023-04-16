#include<stdio.h>
#include<math.h>
float formula(int,int);
double f(int);
int main(){
	int x,n;
	printf("cos(x) = 1 - x^2/2! + x^4/4! ..+ x^n/n!\nformulunu hesaplayan program icin x ve n degeri giriniz\n");
	printf("x: ");
	scanf("%d",&x);
	printf("n: ",&n);
	scanf("%d",&n);
	printf("sonuc: %f",formula(x,n));
	return 0;
}
float formula(int x,int n){
	if(n<4){
		return 1 - pow(x,2)/2;
	}
	return pow(x,n)/f(n) + formula(x,n-2);
}
double f(int n){
	if(n==0) return 1;
	return n * f(n-1);
}