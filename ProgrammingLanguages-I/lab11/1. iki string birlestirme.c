#include<stdio.h>
#define size 50
int main(){
	char result[size];
	char one[size],two[size];
	int n=0,c=0,a;
	printf("Bu program iki stringi birlestirir\n");
	gets(one);
	gets(two);
	while(one[n]!=NULL) n++;
	while(two[c]!='\0') c++;
	printf("\n%d %d",n,c);
	for(a=0;a<c;n++,a++){
		one[n]=two[a];
	}
	puts(one);
	return 0;
}
