#include<stdio.h>
#define size 100
int kelimeSay(char[]);
int main(){
	char one[size];
	printf("Bu program kelime sayisini bulur\n");
	gets(one);
	printf("kelime sayisi %d",kelimeSay(one)+1);
}
int kelimeSay(char one[]){
	int miktar;
	int c;
	for(c=0;one[c]!=NULL;c++);
	for(;c>0;c--){
		if(one[c]==' '&&(one[c+1]>=97&&one[c+1]<=122)) miktar++;
	}
	return miktar;
}
