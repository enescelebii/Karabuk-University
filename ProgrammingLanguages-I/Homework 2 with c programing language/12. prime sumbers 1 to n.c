#include<stdio.h>
int main(){
	int n=1,x,sum,a;
	printf("1 den N sayisina kadar mukemmel sayilari yazdiran program\n");
	scanf("%d",&a);
	for(;n<=a;n++){
	for(x=n-1;x>=1;x--){
		if(n%x==0){
			sum+=x;
		}
	}
	if(sum==n){
		printf("%d\n",n);
	}
	sum=0;
}
	return 0;
}
