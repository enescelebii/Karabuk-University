#include<stdio.h>             // KENDÝM YAPTÝM ENES ÇELEBÝ
#include<math.h>
void palindrome(int);
void main(){
	int n;
	printf("bu program 1 den n sayisina kadar palindrome sayilari rekursif fonksiyon kullanarak yazdirir\nlutfen bir N sayisi giriniz\n");
	scanf("%d",&n);
	palindrome(n);
}
void palindrome(int n){
	int temp=n,x,sum=0;
	if(n>0){
		while(temp!=0){
			x=temp%10;				// cokguzel oldu
			sum=sum*10+x;
			temp/=10;
		}
		if(sum==n){
			printf("%d sayisi palindrome sayisidir\n",n);
		}
		return palindrome(n-1);
	}
	return;
}

