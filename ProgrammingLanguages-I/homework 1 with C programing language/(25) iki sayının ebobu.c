#include<stdio.h>
//#include<conio.h>
int main(){
	enbas: ;
	int a,b;
	printf("sayilarin ebobunu bulmak icin 2 sayi giriniz\n");
	scanf("%d %d",&a,&b);
	if(a==b){
		printf("lutfen farkli sayilar giriniz\n\n");
	//	printf("bu iki sayinin ebobu %d dir",b);
	getch();
	goto enbas;
	}
	else if(a%b==0){
		printf("bu iki sayinin ebobu %d dir",b);
		return 0;
	}
	if(b<a){
		for(;a%b>0;b--){
		}
		printf("bu iki sayinin ebobu %d dir",b);	
		}
	else{
		for(;b%a>0;a--){
		}
		printf("bu iki sayinin ebobu %d dir",a);
	}
	return 0;
}
