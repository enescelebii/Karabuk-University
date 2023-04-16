#include<stdio.h>
int main(){
	int n,f,sumf,sum,x,t;
	printf("girilen deger strong sayi olup olmadigini bulan program\n");
	scanf("%d",&n);
	t=n;
	while(t!=0){
		x=t%10;
		for(f=1;f<=x;f++){
			sumf*=f;
		}
		t/=10;
		sum+=sumf;
		sumf=1;
	}
	if(sum==n){
		printf("girdiginiz sayi bir strong sayidir");
	}
	else{
		printf("girdiginiz sayi bir strong sayi degildir");
	}
	return 0;
}
