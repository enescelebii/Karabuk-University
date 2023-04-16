#include<stdio.h>
int main(){
	int c=0,n,X;
//	long n,X,c=0;
	printf("bir sayidaki kac tane X rakamini bulduran program\n");
	printf("lutfen bir sayi giriniz\n");
	scanf("%d",&n);
	printf("bir X degeri giriniz\n");
	scanf("%d",&X);
	for(;n>0;){
		if(n%10==X){
			c++;
			n/=10;
		}
		else{
			n/=10;
		}
	}
	printf("girdiginiz sayida %d tane %d rakami vardir",c,X);
	return 0;	
}
