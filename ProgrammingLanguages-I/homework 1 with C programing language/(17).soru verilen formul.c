#include<stdio.h>
int main(){
	float S,a,n;
	printf("lutfen bir n sayisi seciniz\n");
	printf("program (S=1/2+1/4+1/6...) formulunu izleyecektir\n");
	scanf("%f",&n);
	for(a=2;a<=n;a+=2){
		S+=1/a;
	}
	printf("%f",S);
	return 0;
}
