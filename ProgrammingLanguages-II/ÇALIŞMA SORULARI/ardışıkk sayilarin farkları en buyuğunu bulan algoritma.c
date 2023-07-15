#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,temp,*dizi;
	printf("Dizideki ardisik sayilarin mutlak degerce en buyuk degeri bulan algoritma\nbir dizi boyutu giriniz:");
	scanf("%d",&n);
	dizi = (int*)calloc(n,sizeof(int));
	for(int i=0;i<n;i++){
		printf("%d. eleman: ",i+1);
		scanf("%d",dizi+i);
	}
	for(int i=0;i<n;i++){
		if(i==n-1) break;
		if(abs(*(dizi+i)-*(dizi+i+1))>temp){
			temp=abs(*(dizi+i)-*(dizi+i+1));
		}
	}
	printf("En buyuk fark: %d",temp);
	free(dizi);
	return 0;
}