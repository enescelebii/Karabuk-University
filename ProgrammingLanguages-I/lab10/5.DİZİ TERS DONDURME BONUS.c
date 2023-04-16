#include<stdio.h>
#define size 10
int main(){
	int a[size];
	int temp,i;
	for(i=0;i<size;i++){
		printf("%d. Eleman:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size/2;i++){   
        temp = a[i];
        a[i] = a[size-i-1];
        a[size-i-1] = temp;
    }
    for(i=0; i<size; i++){
        printf("%d\n", a[i]);
    }
	return 0;
}
/*	a[i]   a[size-i]
	0=1		9=10
	0=10	9=1
	1=2		8=9
	1=9		8=2
	2=3		7=8
	2=8		7=3
	3=4		6=7
	3=7		6=4
	4=5	
	4=6*/
	
