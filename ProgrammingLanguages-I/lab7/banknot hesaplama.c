#include <stdio.h>
/*Klavyeden girilen bir para miktarýný en az banknot kullanarak oluþturmak
istediðimizde içinde kaç tane 100, 50, 20 ve 10’luk olduðunu bulan programý C
dili ile yazýnýz. Not: Klavyeden girilen para miktarý 10’un katlarý olmalýdýr.*/

int main(){
	int yuz;
	int elli;
	int yirmi;
	int on;
	int para;
	printf("lutfen para miktari giriniz\n");
	scanf("%d" , &para );
	if(para%10!=0){
	printf("lutfen 10'un katlari olan bir para miktari giriniz");
	return 0;
	}
	yuz = (para/100);
	para %= 100;
	elli = (para/50);
	para %= 50;
	yirmi = (para/20);
	para %= 20;
	on = (para/10);
	printf("yuzluk banknot sayisi\n");
	printf("%d\n" , yuz);
	printf("ellilik banknot sayisi\n");
	printf("%d\n" , elli);
	printf("yirmilik banknot sayisi\n");
	printf("%d\n" , yirmi);
	printf("onluk banknot sayisi\n");
	printf("%d\n" , on);

	return 0;
}
