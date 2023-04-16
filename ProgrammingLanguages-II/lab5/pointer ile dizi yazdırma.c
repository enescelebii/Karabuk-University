#include<stdio.h>
void main(){
	int dizi[20],n;
	int *pdizi;
	pdizi=dizi;
	printf("bir sayi dizisi boyutu giriniz\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("\nElement - %d: ",i);
		scanf("%d",pdizi + i);
	}
	for(int i=0;i<5;i++){
		printf("\nElement - %d : %d\n",i,*(pdizi + i));
	}
}