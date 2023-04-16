#include<stdio.h>
int main(){
	int n,a,sum;
	printf("bu program 200 ile 100 arasindaki 9'a bolunebilen sayilari toplar ve yazdirir\n");
	for(a=100;a<=200;a++){
		if(a%9==0){
			printf("%d\n",a);
			sum+=a;
		}
	}
	printf("Toplamlari = %d\n",sum);
	return 0;
}
