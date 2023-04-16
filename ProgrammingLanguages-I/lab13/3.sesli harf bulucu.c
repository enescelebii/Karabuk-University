#include<stdio.h>
#define size 100
int sesliharfsay(char[]);
int main(){
	char cumle[size];
	int a;
	printf("Sesli harf sayisini bulmak icin lutfen bir cumle giriniz\n");
	gets(cumle);
	a=sesliharfsay(cumle);
	printf("%d",a);
	return 0;
}
int sesliharfsay(char a[]){
	int c,x;
	for(c=0;a[c]!=NULL;c++);
	for(;c>=0;c--){
	if(a[c]=='a'||a[c]=='e'||a[c]=='i'||a[c]=='o'||a[c]=='u')
	x++;
	}
	return x;
}
