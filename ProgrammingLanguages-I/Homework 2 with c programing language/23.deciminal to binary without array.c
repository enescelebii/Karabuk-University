#include<stdio.h>
int main(){
	int x = 1;
	int n;
	int toplam = 0;
	int mod=0;
	scanf("%d",&n);
	while( n!= 0 ){        
		mod = n%2;
		n = n/2;
		toplam += mod*x;
		x= x*10;
	}
	printf("sonuc: %d", toplam);
	return 0;
}
