#include<stdio.h>
int main(){
	int A;
	int B;
	printf("lutfen bir dikdortgenin 2 kenarini giriniz\n");
	scanf("%d %d",&A,&B);
	printf("dikdortgenin cevresi:%d\ndikdortgenin alani:%d",(A+B)*2,A*B);
	return 0;
}
