#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>
#include<unistd.h>
int dothatshit(int);
int main(){
	int x,num=0;
	printf("Bu program Collatz Conjecture yapar\n bilgi edinmek icin 0\ncalistirmak icin 1\n");scanf("%d",&x);
	if(x==0){
		system("cls");
		printf("\nCollatz Conjecture girilen sayi 1 olana kadar cift ise 2 ye boler tek ise 3 ile carpip 1 ekler\n");
		sleep(3);
	}
	printf("bir sayi giriniz:");scanf("%d",&num);
	dothatshit(num);
	return 0;
}
int dothatshit(int num){
	sleep(0.5);
	printf("\n-%d",num);
	if(num==1){
		printf("\nNUM sayisi 1 olmustur Collatz Conjecture tamamlanmistir: 1");
	}
	else{
		if(num%2==0){
			dothatshit(num/2);
		}
		else if(num%2==1){
			dothatshit(num*3+1);
		}
	}
	return 0;
}