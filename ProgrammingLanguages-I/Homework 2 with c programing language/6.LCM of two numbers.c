#include<stdio.h>
#include<conio.h>
//product by ENES CELEBI / lCM of two numbers
int	main(){
	int A,B,n=1,temp;
	printf("ekoku bulunacak 2 sayi giriniz\n");
	scanf("%d %d",&A,&B);
	if(A==B){
		printf("ayni sayilarin ekoku kendilerine esittir lutfen farkli sayilar giriniz");
	return 0;
	}
	if(A<B){
		for(temp=B;B%A!=0;n++){
			B=temp;
			B*=n;
		}
		printf("bu iki sayinin ekoku:%d",B);
	}
	else{
		for(temp=A;A%B!=0;n++){
			A=temp;
			A*=n;
		}
		printf("bu iki sayinin ekoku:%d",A);
	}
	return 0;
}
