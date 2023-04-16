#include<stdio.h>
int main(){
	int sum,multi;
	int c;
	int A;
	printf("lutfen toplanacak ve carpýlacak 10 sayi giriniz\n");
	for(c=0;c<10;c++){
		scanf("%d",&A);
		sum+=A;
		multi*=A;
	}
	printf("bu 10 sayinin toplami\n");
	printf("%d\n",sum);
	printf("bu 10 sayinin carpimi\n");
	printf("%d",multi);
	return 0;
}
