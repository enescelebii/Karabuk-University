#include<stdio.h>
void tekCift(int);
int main(){
	int a;
	printf("Bu program girilen sayinin tek mi cift mi oldugunu bulur\n");
	scanf("%d",&a);
	tekCift(a);
}
void tekCift(int a){
	if(a%2==0){
		printf("cift");
	}
	else
	printf("tek");
}
