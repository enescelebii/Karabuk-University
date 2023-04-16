#include<stdio.h>
#define size 50
int main(){
	int c,x,f;
	char result[size];
	char one[size];
	gets(one);
		for(c=0;one[c]!=NULL;c++);
		for(x=0,f=0;x<c;x++){
			if(one[x]>=65&&one[x]<=90 || one[x]>=97&&one[x]<=122){
				result[f]=one[x];
				f++;
			}
		}
		printf("%s",result);
}
