#include<stdio.h>
#include<math.h>

int main(){
	int n,x,a,us,c;
	float sum,fac,result;
	printf("[ 1+x+x^2/2!+x^3/3!+.] formulunu yazdiran program icin bir x ve bir n degeri giriniz\n");
	scanf("%d %d",&x,&n);
	for(a=2;a<=n;a++){
		us=pow(x,a);
			for(c=a,fac=1;c>=1;c--){
				fac*=c;
			}
			sum+=us/fac;
	}
	result = 1+x+sum;
	printf(" sonuc :%.2f",result);
	return 0;
}
