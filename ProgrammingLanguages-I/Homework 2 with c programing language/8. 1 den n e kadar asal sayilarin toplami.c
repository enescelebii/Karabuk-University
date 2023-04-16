#include<stdio.h>
int main(){
	int n,x,t,sum;
	printf("bu program 1 den N e kadar asal sayilari  yazdirir lutfen bir N degeri giriniz\n");
	scanf("%d",&n);
	for(;n!=0;n--){
		t=n;
		x=t-1;
		if(x==1){
			//printf("%d sayisi bir asal sayidir\n",n);
			sum+=n;
			printf("1 den N e kadar asal sayilarin toplami:%d",sum-1);//en sonda n sayisi 1 oldugu icin onu da topluyor
			return 0;
		}
		while(t%x!=0&&x!=2){
			x--;
		}
		if(t%x!=0&&x!=1){
		//	printf("%d sayisi bir asal sayidir\n",n);
		sum+=n;
		}
		else{
		//	printf("%d sayisi bir asal sayi degildir\n",n);
		}
	}
	return 0;
}
