#include<stdio.h>
int main(){
	int n,x,sum=0,t;
	printf("bir sayinin palindrome oldugunu sorgulayan program\n");
	scanf("%d",&n);
	t=n;
	while(t!=0){
		x=t%10;
		sum=sum*10+x;
		t/=10;
	}
	if(sum==n){
		printf("girdiginiz sayi bir palindrome sayidir");
	}
	else{
		printf("girdiginiz sayi bir palindrome sayi degildir");
	}
	return 0;
}
