#include<stdio.h>
int main(){
	int n,x,sum,a;
	printf("palindrome sayi giriniz\n");
	scanf("%d",&n);
	a=n;
	for(;a>0;){
		x=a%10;
		sum=sum*10+x;
		a/=10;
	}
	if(sum==n){
		printf("girdiginiz sayi bir palindrome sayi idir");
	}
	else printf("girdiginiz sayi bir palindrome sayi degildir");
	return 0;
}
