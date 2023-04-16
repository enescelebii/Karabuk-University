#include<stdio.h>		//	1-X^2/2!+X^4/4!-.. verilen formulu hesaplama
#include<math.h>		//  KENDÝM YAPTÝM ENES ÇELEBÝ // :D guzel oldu
double formula(double,int);
double f(int);		
int main(){
	double x;
	int n;
	printf("bu program 1-X^2/2!+X^4/4!-.. formulunu rekursif fonksiyonlar ile hesaplar\nlutfen bir x ve n degeri giriniz\n");
	printf("x degeri: ");
	scanf("%lf",&x);
	printf("n degeri: ");
	scanf("%d",&n);
	printf("sonuc: %.2lf",formula(x,n));  				//19.03.23 21:54
	return 0;
}
double formula(double x,int n){
	if(n<2) return 1;
	return -1 * pow(x,n) / f(n) + formula(x,n-2);    	//rekürsif kýsým 
}
double f(int n){
	if(n<1) return 1;
	return n * f(n-1);
}
