#include<stdio.h>
// produced by ENES CELEBI // finding between 1 to n armstrong numbers
int main(){
	int n=1,sum,x,t,a;
	printf("girdiginiz sayinin armstrong sayisi olup olmadigini bulmak icin bir deger giriniz\n");
	scanf("%d",&a);
	for(;n<=a;n++){
	t=n;
	for(sum=0;t!=0;){
		x=t%10;
		sum+=x*x*x;
		t/=10;
	}
			if(sum==n){
			printf("%d sayisi bir armstrong sayisidir\n",n);
			}
	}
	return 0;
}
