#include<stdio.h>
#include<conio.h>
int main(){
	char giris[50];
	char *p;
	int i=0,k;
	p=giris;
	while(1){
		*(p+i)=getch();
		if(*(p+i)==13)
			break;
		putch('*');
		i++;
	}
	printf("\n");
	for(k=0;k<i;k++){
		putch(*(p+k));
	}
	getch;
	return 0;
}