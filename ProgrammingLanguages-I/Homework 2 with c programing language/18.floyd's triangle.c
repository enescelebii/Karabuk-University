#include<stdio.h>
int main(){
	int c,n,a,x,duz,ters;
	printf("Floyd's Triangle ini yazdirmak icin bir basamak sayisi giriniz\n");
	scanf("%d",&n);
	for(c=1;c<=n;c++){
		printf("\n");
		if(c%2==0){
			ters=0;
			duz=1;
		}
		else{
			ters=1;
			duz=0;
		}
		for(a=1;a<=c;a++){
			if(a%2==0){
				printf("%d",duz);
			}
			else{
				printf("%d",ters);
			}
		}
	}
	return 0;
}
