#include<stdio.h>
int main(){
	int n,x,a,us,c;
	float sum,fac,result;
	printf(" x - x^3 + x^5 +..] formulunu yazdiran program icin bir x ve bir n degeri giriniz\n");
	scanf("%d %d",&x,&n);
	result = x - pow(x,3);
	for(a=5,c=1;a<=n;a+=2){
			us=pow(x,a);
			sum+=us;
	}
	result +=sum;
	printf("sonuc:%f",result);
	return 0;
}
