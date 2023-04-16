#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,xbir,xiki;
	printf("ikinci dereceden bir denklem olusturmak icin 3 deger giriniz (a,b,c)\n");
	scanf("%f %f %f",&a,&b,&c);
	xbir = b*b-(4*a*c);
	xbir =(-b+sqrt(xbir))/2*a;
	xiki = b*b-(4*a*c);
	xiki =(-b-sqrt(xiki))/2*a;
	printf("denklemin kokleri\n");
	printf("ilk kok:%.1f\nikinci kok:%.1f",xbir,xiki);
	return 0;
}
