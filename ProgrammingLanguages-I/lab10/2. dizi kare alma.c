#include<stdio.h>
#define size 10


int main(){
	int a[size];
	int result,square,i;
	
	for(i=0;i<=size;i++){
		printf("%d. sayi:",i);
		scanf("%d",&a[i]);
		
		if(a[i]==-1) break;
		
		square=a[i]*a[i];
		printf("%d. sayinin karesi:%d\n",i,square);
	}
	printf("program kapatilmistir");
	
	return 0;
}
