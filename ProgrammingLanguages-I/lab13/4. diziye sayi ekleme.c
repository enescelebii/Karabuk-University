#include<stdio.h>
#define size 100
void bubbleSort(int[],int);
int main(){
	int c,x;
	int dizi[size];
	dizi[0]=0;
	printf("Bir sayi dizisi giriniz\n");
	for(c=0,x=0;dizi[c]!=-1;c++,x++){
	scanf("%d",&dizi[c]);
	if(dizi[c]==-1) break;
	}
	printf("diziye eklenecek bir pozitif sayi giriniz\n");
	scanf("%d",&dizi[x]);
	bubbleSort(dizi,x);
}
void bubbleSort(int dizi[], int adet_mutlak){
  int temp = 0,i,j,c,x;
  c=adet_mutlak;
  for( i = 0; i < adet_mutlak-1; i++){
    for( j = 0; j < adet_mutlak-i; j++){
      if(dizi[j] > dizi[j+1]){
        temp = dizi [j];
        dizi[j] =dizi[j+1];
        dizi[j+1] = temp;
      }
    }
  }
  for(x=0;x<=c;x++){
  	printf("%d",dizi[x]);
  }
}
