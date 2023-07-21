#include<stdio.h>
#include<stdlib.h>
#include<time.h>							// ENES CELEBI 2110206007
#include<string.h>							//20.07.23 01:51 cok guzel oldu sadece capraz kontrollerde biraz zorlandım
#include<unistd.h>
#define size 42
#define ROWS 6
#define COLS 7
void check_win();
void print_table();
int table[ROWS][COLS] = {0};
int tur = 0;
int main(){
	
	printf("Bu program connect four oyununu oynar oyun 2 kisiliktir\nAmac kendi takiminin renginde 4 renk yanyana veya capraz bir bicimde denk gelir ise\nKAZANIRSIN:D\nnasil kodlayacagim bilmiyomm\n");
	
	
	int player_first_x = 0;
	int player_second_x = 0;
	
	while( tur < 42 ){
		
		system("cls");
		print_table();
		check_win();
		
		tekrardene1:
		printf("\nBirini oyuncunun sirasi:\n\nHamleni hangi hucreye yerlestireceksin?\n");
		printf("x:");
		scanf("%d",&player_first_x);
		int i = ROWS - 1;
		
		while (i >= 0 && table[i][player_first_x] != 0) {
            i--; // Boş hücre bulana kadar yukarı çıkıyo
        }
		if (i >= 0) {
            table[i][player_first_x] = 1;
        } else {
            printf("Geçersiz hamle! Lütfen başka bir sütun seçin.\n");
            goto tekrardene1;
        }	
		system("cls");
		print_table();
		check_win(table);
//////////////////////////////////
		tekrardene2:
		printf("\nikinci oyuncunun sirasi:\n\nHamleni hangi hucreye yerlestireceksin?\n");
		printf("x:");
		scanf("%d",&player_second_x);
		i = ROWS - 1; // En alt satır
        while (i >= 0 && table[i][player_second_x] != 0) {
            i--; // Boş hücre bulana kadar yukarı çık
        }

        if (i >= 0) { // Geçerli hamle
            table[i][player_second_x] = 2;
        } else {
        	system("cls");
            printf("Gecersiz hamle! Lutfen baska bir sutun secin.\n");
            goto tekrardene2;
        }
		system("cls");
		print_table();
		check_win(table);
	}	
	
	
	
	return 0;
}
void print_table(){
	printf("    0.1.2.3.4.5.6.\n    --------------\n");
	for(int i=0;i<6;i++){
		printf("%d.- ",i);
		for(int a=0;a<7;a++){ 			// printf table
			printf("%d ",table[i][a]);
		}
		printf("\n");
    }
}
void check_win(){
	int status = 0;
	int success1=0,success2=0,i=0,a=0;
	if(tur==43){
		system("cls");
		printf("\n\nOYUN HAKKINIZ DOLDU KALDIN GIDIN\n");
	}
	
	// yan kontrol
	for(int i=0;i<6;i++){
		success1=0;
		success2=0;
		for(int a=0;a<7;a++){
			if(table[i][a]==1){
				success1++;
			}else{
				if(table[i][a]==2){
					success2++;
				}
			}
			if(success1==4){
				system("cls");
				printf("\n\n***Birinci oyuncu kazandi***\n\n");
				print_table();
				return;
			}
			else if(success2==4){
				system("cls");
				printf("\n\n***ikinci oyuncu kazandi***\n\n");
				print_table();
				return;
			}
		}
	}
	
	//dikey kontrol
	for(int a=0;a<7;a++){
		success1=0;
		success2=0;
		for(int i=0;i<6;i++){
			if(table[i][a]==1){
				success1++;
			}else{
				success1=0;
				if(table[i][a]==2){
					success2++;
				}
			}
			if(success1==4){
				system("cls");
				printf("\n\n***Birinci oyuncu kazandi***\n\n");
				print_table();
				return;
			}
			else if(success2==4){
				system("cls");
				printf("\n\n***ikinci oyuncu kazandi***\n\n");
				print_table();
				return;
			}
		}
	}
	
    // Sağdan sola çapraz kontrol			//bu kismi internetten yardim alarak yazdim fakat dağlamasini ve calisma mantigini bol bol kontrol ettim
    for (int i = 3; i < ROWS; i++) {
        for (int j = 0; j < COLS - 3; j++) {
            if (table[i][j] != 0 && table[i][j] == table[i - 1][j + 1] && table[i][j] == table[i - 2][j + 2] && table[i][j] == table[i - 3][j + 3]) {
                if(table[i][j]==1){
                	system("cls");
                	printf("\n\n***Birinci oyuncu kazandi***\n\n");
					print_table();
					return;
				}else if(table[i][j]==2){
					system("cls");
					printf("\n\n***ikinci oyuncu kazandi***\n\n");
					print_table();
					return;
				}
            }
        }
    }

    // Soldan sağa çapraz kontrol		//bu kismi internetten yardim alarak yazdim fakat dağlamasini ve calisma mantigini bol bol kontrol ettim
    for (int i = 3; i < ROWS; i++) {
        for (int j = 3; j < COLS; j++) {
            if (table[i][j] != 0 && table[i][j] == table[i - 1][j - 1] && table[i][j] == table[i - 2][j - 2] && table[i][j] == table[i - 3][j - 3]) {
                if(table[i][j]==1){
                	system("cls");
                	printf("\n\n***Birinci oyuncu kazandi***\n\n");
					print_table();
					return;
				}else if(table[i][j]==2){
					system("cls");
					printf("\n\n***ikinci oyuncu kazandi***\n\n");
					print_table();
					return;
				}
            }
        }
    }
	tur++;
	return;
}