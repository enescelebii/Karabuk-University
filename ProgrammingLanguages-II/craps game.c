//crab game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int zarAT();

int main(){
	int firstdie,seconddie,point,sum,a;
	srand(time(NULL));
	for(a=0;a<4;a++) printf("   ****** ******\n");
	printf("Lutfen 2 zar atmak icin herhangi bir tusa basiniz\n");
	getchar();
	firstdie = 1 + (rand() % 6);
	seconddie = 1 + (rand() % 6);
	if(firstdie + seconddie == 7 || firstdie + seconddie == 11 ){
		printf("**TEBRÝKLER KAZANDINIZ** ATTIGINIZ SAYÝ%d",firstdie+seconddie);
	}
	else if(firstdie + seconddie == 2 || firstdie + seconddie == 3 || firstdie + seconddie == 12){
		printf("MALESEF KAYBETTINIZ");
	}
	else{
		point = firstdie + seconddie;
		printf("Tutturmaniz gereken toplam sayi:%d\n",point);
		while(1){
			printf("Simdi tekrar zar atmak icin bir tusa basiniz\n");
			getchar();
			getchar();
			firstdie= 1 + (rand() % 6);
			seconddie= 1 + (rand() % 6);
			sum = firstdie + seconddie;
			printf("Gelen toplam sayi:%d\n\n1.zar:%d\n\n2.zar:%d\n\n",sum,firstdie,seconddie);
			if(sum == 7) {
					printf("MALESEF KAYBETTINIZ");
					return 0;
				}
			if(sum == point) {
					printf("**TEBRIKLER KAZANDINIZ**");
					return 0;
				}
			}
		}
		return 0;
	}

/*int zarAT(){              // bu fonksiyona iki zarý gönderince ikiside ayný deðeri alýyor
										neden boyle oluyor anlamadým :D
	int x;
	srand(time(NULL));
	x= 1 + (rand() % 6);
	return(x);
}*/
