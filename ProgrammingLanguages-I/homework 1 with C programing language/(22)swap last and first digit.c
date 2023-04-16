#include<stdio.h>
#include<math.h>
int main(){
	int n,L,f,a,sum,c=0,p;
	printf("ilk ve son basamaktaki sayiyi swaplamak icin bir sayi giriniz\n");
	scanf("%d",&n);
	a=n;
	f=n%10;
	for(;a>0;){
		L=a;
		a/=10;
	}
	a=n;
	for(;a>0;c++){
		a/=10;
	}
	a=n;
	p=pow(10,c-1);
	sum= (f*p)+(a%p-f)+L;
	printf("%d",sum);
	return 0;
}
