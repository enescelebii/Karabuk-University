#include<stdio.h>
/*Draw a flow chart to print all natural numbers in reverse (from n to 1)*/
int main(){
	int n;
	printf("bir n sayisi giriniz\n");
	scanf("%d",&n);
	if(n>1){
		for(n=n;n>=1;n--){
			printf("%d\n",n);
		}
	}
	else if(n<1){
		for(n=n;n<=1;n++){
			printf("%d\n",n);
		}
	}
	else{
		printf("%d",1);
	}
	return 0;
}
