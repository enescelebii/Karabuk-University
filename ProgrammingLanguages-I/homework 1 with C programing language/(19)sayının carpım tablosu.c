#include<stdio.h> 
int main(){
	int c,n;
	printf("carpim tablosu yapilacak olan bir sayi belirleyiniz\n");
	scanf("%d",&n);
	for(c=1;c<11;c++){
		printf("%d\n",n*c);
	}
return 0;  
}
