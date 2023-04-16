#include<stdio.h>
#include<math.h>
int main(){   //tekler - ciftler +
	enbas: ;
	int n,a,x,us,uss,c;
	float sum,summ,result,fac;
	printf("[ 1-X^2/2!+X^4/4!-..] islemini yaptirmak icin birer x degeri ve n degeri giriniz\n");
	scanf("%d %d",&x,&n);
	for(a=2;a<=n;a+=2){
		if(a%4==0){
			us=pow(x,a);
			for(c=a,fac=1;c>=1;c--){
				fac*=c;
			}
			sum+=us/fac;
		}
		else{
			uss=pow(x,a);
			for(c=a,fac=1;c>=1;c--){
				fac*=c;
			}
			summ-=uss/fac;
		}
	}
	result = 1+summ+sum;
	printf(" sonuc :%f",result);
	return 0;
}
