#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int main(){
	char kelime[100], cizgi[100], harf;
	int uzunluk = 0, fail = 0;

	printf("Bu program adam asmaca oynar, lutfen bir kelime tutun: ");
	scanf("%s", kelime);
	printf("7 yanlis hakkin var.\n");
	sleep(1);
	printf("Oyun basliyor...\n");
	sleep(2);

	uzunluk = strlen(kelime);

	for(int i = 0; i < uzunluk; i++){
		cizgi[i] = '_';
	}
	cizgi[uzunluk] = '\0';
	system("cls");

	while(1){
		if(fail > 6){
			printf("\n***KAYBETTIN!***\n");
			return 0;
		}

		printf("\nBir harf girin: ");
		scanf(" %c", &harf);
		int dogru = 0;

		for(int i = 0; i < uzunluk; i++){
			if(kelime[i] == harf){
				cizgi[i] = harf;
				dogru = 1;
			}
		}

		if(!dogru){
			fail++;
		}

		printf("\nKelime: %s", cizgi);
		printf("\nYanlis sayisi: ");
		for(int i = 0; i < fail; i++){
			printf("*");
		}
		printf("\n");
		if((strcmp(kelime,cizgi))==0){
			printf("\n***KAZANDIN!***\n");
			return 0;
		}
	}
	return 0;
}
