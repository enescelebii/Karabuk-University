#include<stdio.h>
int asalMi(int);
void armstrongMu(int);

int main(){
	int a;
	printf("Bu program girilen sayinin asal veya armstrong sayi oldugunu bulur\n");
	scanf("%d",&a);
//	if(asalMi(a)==1){
//		printf("%d sayisi hem asal hem armstrongtur\n",a);
//	}
	if(asalMi(a)==1){
		printf("%d sayisi asal idir\n",a);
	}
	else
	armstrongMu(a);
	return 0;
}

int asalMi(n){
	int b,x,t;
	for(;n!=0;n--){
		t=n;
		x=t-1;
		if(x==1){
			b=1;
			return b;
		}
		while(t%x!=0&&x!=2){
			x--;
		}
		if(t%x!=0&&x!=1){
			b=1;
			return b;
		}
		else{
			b=0;
			return b;
		}
	}
}
void armstrongMu(n){
		int sum=0,x,t;
	t=n;
	while(n!=0){
		x=n%10;
		sum+=x*x*x;
		n/=10;
	}
	if(sum==t){
		printf("girdiginiz sayi bir armstrong sayisidir\n\n");
	}
	else{
		printf("girdiginiz sayi ne asaldir ne armstrong");
	}
}
