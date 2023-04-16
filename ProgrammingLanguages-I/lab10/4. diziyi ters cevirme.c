#include<stdio.h>
#define size 9
int main(){
	int a[size];
	int b[size];
	int c,i;
	printf("Lutfen 10 eleman giriniz\n");
	for(i=0;i<=size;i++){
		printf("%d. eleman: ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(c=0,i-=1;c<=size;c++,i--){
		b[c]=a[i];
		printf("%d.eleman: %d\n",c,b[c]);
	}
	return 0;
}
