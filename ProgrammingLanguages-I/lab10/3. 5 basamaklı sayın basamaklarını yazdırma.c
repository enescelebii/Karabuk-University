#include<stdio.h>
#define size 4
int main(){
	int a[size];
	int n,i;
	printf("Bir sayi giriniz\n");
	scanf("%d",&n);
	for(i=0;i<=size;i++){
		
		if(n==0) break;
		
		a[i]=n%10;
		
		n/=10;
		
	}
	for(i-=1;i>=0;i--){
		printf("%d  ",a[i]);
	}
	return 0;
}
