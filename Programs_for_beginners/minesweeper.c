//									 MINESWEEPER by enes celebi
/*				3 e 3 lük bir dizi oluşturacagım içinde 3 tane bomba olmasını istiyorum
//              eger kullanıcı 6 kez bombaları seçmeden bir konum girerse oyunu kazanacak :D*/
#include <stdio.h>//programda sıkıntı var hala çözmeye çalışıyorum
#include <stdlib.h>
#include <time.h>
int size,bomb_nav(),status=1,y,x,j=0;
void select_nav(char [][size],int,int);
int main(){
	srand(time(NULL));
	int h=1,bombcount;
	int bombx,bomby,temp1=5,temp2=5;
	printf("mayin tarlasi boyutu giriniz en kucuk 3 olabilir\nkenar uzunlugu:");
	scanf("%d",&size);
	char area[size][size];
	for(int i=0;i<size;i++){
		for(int a=0;a<size;a++){
			area[i][a]='o';
		}
	}
	for(int i=0;i<size;i++){
		bombx=rand()%3;//bombanin konumunu rastgele belirliyoruz
		bomby=rand()%3;
		if(temp1!=bombx && temp2!=bomby){//ayni yere bomba gelirse tekrar calıstırıyoruz
			area[bombx][bomby]='*';
			temp1=bombx;
			temp2=bomby;
		}
		else i--;
	}
	printf("mayinlarin yerlerini gormek icin ""0"" iptal icin herhangi bir tusuna basin: ");
	scanf("%d",&h);//bombaların yerlerini gormek icin 0 a basıyoruz
	if(x==0){printf("   ");
		for(int i=0;i<size;i++) printf("%d.",i);
		printf("\n");
		for(int i=0;i<size;i++){
			printf("%d. ",i);
			for(int a=0;a<size;a++){
				printf("%c ",area[i][a]);
			}
			printf("\n");
		}
	}printf("\n%d",bombcount);
	for(j=size*size-size;j>0;j--){
		printf("bir kutucuk pozisyonu seciniz x,y\nx:");//nereyi secmek istedigimizi giriyoruz
		scanf("%d",&x);
		printf("y:");
		scanf("%d",&y);
		if(area[x][y]=='*'){
			for(int i=0;i<size;i++){
				for(int a=0;a<size;a++){
					area[i][a]='-';
				}
			}
			for(int i=0;i<size;i++){
				area[i][y]='*';
			}
			for(int i=0;i<size;i++){
				area[x][i]='*';
			}
			printf("\n\nPATLADIN\n\n");//sectimiz konum bombaya denk gelirse patlıyoruz
			break;
		}
		else{
			area[x][y]='1';
			if(j==0){
				printf("\n\nKAZANDINIZ\n\n");
			}
			else printf("tebrikler devam ediyorsun\n");
		}
	}
	for(int i=0;i<size;i++){
		for(int a=0;a<size;a++){
			printf("%c ",area[i][a]);//en son secilen alanları yazdırıyoruz
		}
		printf("\n");
	}
	return 0;
}
/*for(int i=0;i<size;i++){
		for(int a=0;a<size;a++){
			printf("%c ",area[i][a]);
		}
		printf("\n");
	}
	printf("bir kutucuk pozisyonu seciniz x,y\nx:");
	scanf("%d",&x);
	printf("y:");
	scanf("%d",&y);
	if(area[x][y]=='*'){
		for(int i=0;i<size;i++){
			for(int a=0;a<size;a++){
				area[i][a]='o';
			}
		}
		for(int i=0;i<size;i++){
			area[i][y]='*';
		}
		for(int i=0;i<size;i++){
			area[x][i]='*';
		}
		printf("\n\nPATLADIN\n\n");
	}*/