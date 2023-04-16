#include <stdio.h>
#define size 10
int enbuyuk(int[]);

int main(){
	int dizi[size],x,result;
	printf("10 elemanli sayi dizisi giriniz\n");
	for(x=0;x<10;x++){
		printf("%d.sayi ",x+1);
		scanf("%d",&dizi[x]);
	}
	result=enbuyuk(dizi);
	printf("en buyuk eleman:%d",result);
	return 0;
}

int enbuyuk(int dizi[]){
	static int max=-9999;	
	static int x=0;
	if(x<10){
		if(dizi[x]>max){
			max=dizi[x];
			x++;
			enbuyuk(dizi);
		}
		return max;
	}
}
