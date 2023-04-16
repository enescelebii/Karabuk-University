#include<stdio.h>                   // KENDÝM YAPTIM ENES ÇELBÝ
#include<math.h>					// KENDÝM YAPTIM ENES ÇELBÝ
double f(int);					// VERÝLEN FORMULU HESAPLÝCAZ ARKADASLAR
double formula(double,int);	// FORMULUMUZ 1-x^3/3! + x^5/5! ... + (-1)^n*x^(2n+1)/(2n+1)! kolay gelsin
int main(){
	double x;
	int n;
	printf("verilen formulu rekursif fonksiyon ile hesaplayan fonksiyon\nformul icin lutfen kod satirlarina bakiniz\n\nbir x ve n degeri giriniz\n");
	printf("x degeri: ");
	scanf("%lf",&x);
	printf("\nn degeri: ");
	scanf("%d",&n);
	printf("\nsonuc: %.2f",formula(x,n));				//19.03.23 21:54
	return;	
}
double formula(double x,int n){
	if(n==0){
		return 1;
	}
	return (pow(-1,n) * pow(x,2*n+1)) / (f(2*n+1)) + (formula(x,n-1));
}
double f(int n){
	if(n<1) return 1;
	return n * f(n-1);
}
