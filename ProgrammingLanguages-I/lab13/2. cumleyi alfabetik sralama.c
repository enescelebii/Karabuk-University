#include<stdio.h>
#define size 100
#include<string.h>
#include<stdlib.h>
#include<math.h>
//void alfabetik(char[]);
void bubbleSort(char[], int);
int main(){
	char cumle[size];
	int c;
	printf("Bu program girilen cumleyi alfabetik siralar\n");
	gets(cumle);
	for(c=0;cumle[c]!=NULL;c++);
	bubbleSort(cumle,c);
	return 0;
}
void bubbleSort(char dizi[], int adet_mutlak){
  int temp = 0,i,j;
  for( i = 0; i < adet_mutlak-1; i++){
    for( j = 0; j < adet_mutlak-i-1; j++){
      if(dizi[j] > dizi[j+1]){
        temp = dizi [j];
        dizi[j] =dizi[j+1];
        dizi[j+1] = temp;
      }
    }
  }
  puts(dizi);
}

