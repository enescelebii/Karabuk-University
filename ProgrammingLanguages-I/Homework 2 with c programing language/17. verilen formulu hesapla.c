#include<stdio.h>
int main(){
	float n,a,sum;
	printf(" n sayisina kadar (1/2 + 1/4 + 1/n) formulunu yazdiran program\n");
	printf(" lutfen bir deger giriniz\n");
	scanf("%f",&n);
	for(a=2;a<=n;a+=2){
		sum+=1/a;
	}
	printf("sonucunuz = %f",sum);
	return 0;
}
