#include<stdio.h>
int main(){
	char ad[20];
	FILE *mfPtr;
	if((mfPtr= fopen("benim_adim.txt","w"))==NULL){
		printf("dosya acilamadi\n");
		return 0;
	}
	else{
		printf("isim giriniz:");
		gets(ad);
		fprintf(mfPtr,"%s",ad);
		fclose(mfPtr);
	}
	return 0;
}