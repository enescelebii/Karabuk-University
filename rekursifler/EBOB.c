#include <stdio.h>
int buyukortakbolen(int,int);

int main(){
	int a,b,sonuc;
	printf("iki sayi giriniz\n");
	scanf("%d\n%d",&a,&b);
	sonuc=buyukortakbolen(a,b);
	printf("sonuc: %d",sonuc);
	return 0;
}

int buyukortakbolen(int a , int b){
	static int temp=9999;
	if(temp!=1){
		if(a%temp == 0 && b%temp == 0){
			return temp;
		}
		else{
			temp--;
			buyukortakbolen(a,b);
		}
	}
}
