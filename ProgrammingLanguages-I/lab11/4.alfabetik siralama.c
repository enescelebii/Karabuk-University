#include<stdio.h>
#include<string.h>
#define size 50
int main(){
	char one[size][size],temp[size];
	int c,a;
	printf("Bu program girilen 10 kelimeyi alfabetik siralar\nLutfen 10 kelime giriniz\n");
	for(c=0;c<10;c++)
	 gets(one[c]);
	for(c=0;c<10;c++) 
	for(a=0;a<10;a++)
			if(one[c][0]<one[a][0]){
				strcpy(temp,one[c]);
				strcpy(one[c],one[a]);
				strcpy(one[a],temp);
			} 
		printf("\n");
	for(c=0;c<10;c++)
	 puts(one[c]);
}
