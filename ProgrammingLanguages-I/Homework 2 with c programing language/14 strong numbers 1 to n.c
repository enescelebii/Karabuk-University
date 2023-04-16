#include<stdio.h>
int main(){
	int n=1,f,sumf,sum,x,t,a;
	printf("girilen deger strong sayi olup olmadigini bulan program\n");
	scanf("%d",&a);
	for(;n<=a;n++){
		sum=0;
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
		printf("%d\n",n);
	}
}
	return 0;
}
