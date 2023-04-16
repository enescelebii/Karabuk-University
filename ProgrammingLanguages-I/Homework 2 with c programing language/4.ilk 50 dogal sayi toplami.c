#include<stdio.h>
int main(){
	int n=0,toplam;
	printf("bu program ilk 50 dogal sayinin toplamini yazdirir\n");
	while(n!=49){
	//	printf("%d\n",n);
		n++;
		toplam+=n;
	}
	printf("%d",toplam);
	return 0;
}
