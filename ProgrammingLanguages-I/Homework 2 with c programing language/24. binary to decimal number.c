#include<stdio.h>
#include<math.h>
int main (){
	int bin,us,c,x,sum;
	printf("binary to decimal donusumunu yapmak icin bir binary degeri giriniz\n");
	scanf("%d",&bin);
	for(c=0;bin>0;c++){
		us=pow(2,c);
		x=bin%10;
		sum+=x*us;
		bin/=10;
	}
	printf("sonuc sayi:%d",sum-1);
	return 0;
}
