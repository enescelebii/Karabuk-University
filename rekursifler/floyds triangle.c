#include<stdio.h>       
/*
1  
2 3  
4 5 6  
7 8 9 10  
11 12 13 14 15  */   //floyds triangle yapýcazz bugun insallah tabi rekursif ile
int floyds(int,int);
int main(){
	int satir,sayi=1;
	printf("bu program rekursif fonksiyon ile floyds triangle seklini cikartir\nlutfen satir sayisi giriniz\n");
	scanf("%d",&satir);
	floyds(satir,sayi);
	return 0;
}
int floyds(satir,sayi){
	static int a=1;
	if(a<=satir){
			for(int i=0;i<a;i++,sayi++){	//		kendimm yaptýmmmm ENES ÇELEBÝ 19.03.23 22:51
			printf("%d ",sayi);
		}
		printf("\n");
	}
	a++;
	return floyds(satir,sayi);
}
