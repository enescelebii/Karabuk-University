#include<stdio.h>             // KENDÝM YAPTÝM ENES ÇELEBÝ
#include<math.h>
void n_to_one(int n);
void main(){
	int n;
	printf("bu program 1 den n e kadar asal sayilari rekursif fonksiyon ile yazdirir\nlutfen bir N sayisi giriniz\n");
	scanf("%d",&n);
	n_to_one(n);
}
void n_to_one(int n){
	int x=0,t;
	if(n>1){
		x=n-1;
		if(x==1){
			printf("%d sayisi bir asal sayidir\n",n);
			return;
		}
		while(n%x!=0&&x!=2){
			x--;				// x 2 ye kadar n'i hiç bolmeden gelirse asal demektir
		}
		if(n%x!=0){
			printf("%d sayisi bir asal sayidir\n",n);
		}
		return n_to_one(n-1);
	}	
}
