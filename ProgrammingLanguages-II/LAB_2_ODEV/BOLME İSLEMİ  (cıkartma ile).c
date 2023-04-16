#include<stdio.h>  
#include<math.h>                    //KENDÝM YAZDÝM ENES ÇELEBÝ
int bolmeislemi(int,int);
int main(){
	int num1,num2,temp;
	printf("bu program bolme islemini rekursif fonksiyon kullanarak yapar (cikartma islemi ile)\nlutfen bolum islemi icin 2 sayi giriniz: ");
	scanf("%d",&num1);
	scanf("%d",&num2);
	if(num2>num1){
		temp=num1;
		num1=num2;
		num2=temp;
	}
	printf("sonuc : %d\n",bolmeislemi(num1,num2));
	return 0;
}
int bolmeislemi(num1,num2){
	static int x=0;
	if(num1%num2!=0){
		printf(" TAM BOLUNMUYOR");
	}
	if(num1-num2==0){
		return x+1;
	}
	else{
		x++;
		bolmeislemi(num1-num2,num2);
	}
}
