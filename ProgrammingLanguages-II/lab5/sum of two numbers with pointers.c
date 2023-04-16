#include<stdio.h>
void main(){
	int num1,num2,*pointer1,*pointer2;
	printf("2 sayi giriniz\n1.sayi:");
	scanf("%d",&num1);
	printf("2.sayi:");
	scanf("%d",&num2);
	pointer1= &num1;
	pointer2= &num2;
	printf("%d",*pointer1 + *pointer2);
}