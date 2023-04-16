#include<stdio.h>
#include<conio.h>
int main(){

	int arm,n,sum,x,t;
	scanf("%d",&n);
	t=n;
	while(n!=0){
		x=n%10;
		sum+=x*x*x;
		n/=10;
	}
	if(sum==t){
		printf("girdiginiz sayi bir armstrong sayisidir\n\n");
	//	arm=1;
	}
	printf("%d",arm);
	return 0;
}
