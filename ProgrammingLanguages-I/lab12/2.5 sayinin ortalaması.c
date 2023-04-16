#include<stdio.h>
float ortAL(int,int,int,int,int);
int main(){
	int a,b,c,d,e;
	printf("Bu program 5 degerin ortalamasini alir\n");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	printf("%.1f",ortAL(a,b,c,d,e));
}
float ortAL(int a,int b,int c, int d,int e){
	float x;
	x=(a+b+c+d+e)/5;
	return x;
}
