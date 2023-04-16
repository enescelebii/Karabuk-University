#include <stdio.h>
int main(){
	int a,b,c;
	printf("lutfen 3 adet sayi giriniz\n");
	printf("program en buyugunu bulacaktir\n");
	scanf("%d\n",&a);
	scanf("%d\n",&b);
	scanf("%d",&c);
	if(a==b==c){
		printf("sonucunuz\n");
		printf("%d\n",a);
		}
	else if(a==b&&a>c){
		printf("sonucunuz\n");
		printf("%d\n",a);
		}
	else if(c>a&&c>b){
		printf("sonucunuz\n");
		printf("%d\n",c);
		}
	else if(b>a){
		printf("sonucunuz\n");
		printf("%d\n",b);
		}
	else{
		printf("sonucunuz\n");
		printf("%d",a);
		}
	return 0;
}
