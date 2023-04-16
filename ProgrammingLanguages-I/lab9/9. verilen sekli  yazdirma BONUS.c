#include<stdio.h>
int main(){
	int satir,bosluk,A,c,j,i,x;
	printf("bir satir sayisi giriniz\n");
	scanf("%d",&satir);
	for(bosluk=20+satir,i=1;i<=satir;i++){	
		j = bosluk;
		
		for(;j>0;j--){//bosluk
			printf(" ");
		}
		
		A=65;
		for( c=1 ;c<=i;c++){//harfler
			printf("%c",A++);
		}
		A=A-1;
		c=c-1;
		for( c ; c>1 ; c--){
			printf("%c",--A);
		}
		bosluk-=1;
		printf("\n");
	}
	return 0;
}

 
 
 
  /*        A
           ABA
          ABCBA
         ABCDCBA
         */
