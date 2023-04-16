#include<stdio.h>                   // KENDÝM YAPTIM ENES ÇELBÝ
#include<math.h>					// KENDÝM YAPTIM ENES ÇELBÝ
int num_finder(int,int);
void main(){
	int num,x;
	printf("bu program bir sayidaki x rakamimndan kac tane buldundugunu rekursif fonksiyon ile bulur\nlutfen bir sayi giriniz: ");
	scanf("%d",&num);
	printf("lutfen bir x rakami giriniz: ");
	scanf("%d",&x);
	printf("\n\n\n       %d sayisinda %d tane %d rakamidan bulunurrrrrrr:D",num,num_finder(num,x),x);
}
int num_finder(int num,int x){
	static int sum=0;
	if(num>0){
		if(x==num%10){
			sum++;
		}
		return num_finder(num/10,x);
	}
	return sum;
}
