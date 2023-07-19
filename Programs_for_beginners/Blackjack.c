#include <stdio.h>
#include <stdlib.h>
#include <time.h>													// ENES CELEBI 2110206007
#include <string.h>													// 15.07.23 16:15
#include <unistd.h>

#define KARO "KARO"   // Karo (Diamond)
#define KUPA "KUPA"   // Kupa (Heart)
#define MACA "MACA"   // Maca (Spade) 
#define SINEK "SINEK"  // Sinek (Club)

typedef struct {
    const char *sembol;  // Kart sembolü (Karo, Kupa, Maca, Sinek)
    const char *deger;   // Kart değeri (As, 2, 3, ... , 10, J, Q, K)  //internetten aldım bunları
} Kart;

int main() {
    int num;
    int boomstatus = 0;
    int selection_for_A = 0;  // As kartının durumunu seçmek için oyun esnasında hem 1 hedme 11 olabiliyor cunku
    int player_sum = 0, dealer_sum = 0;
    srand(time(NULL));
    Kart dealer_cards[10], player_cards[10];
    Kart card_deck[] = {
        {KARO, "A"}, {KARO, "2"}, {KARO, "3"}, {KARO, "4"}, {KARO, "5"}, {KARO, "6"}, {KARO, "7"}, {KARO, "8"}, {KARO, "9"}, {KARO, "10"}, {KARO, "J"}, {KARO, "Q"}, {KARO, "K"},
        {KUPA, "A"}, {KUPA, "2"}, {KUPA, "3"}, {KUPA, "4"}, {KUPA, "5"}, {KUPA, "6"}, {KUPA, "7"}, {KUPA, "8"}, {KUPA, "9"}, {KUPA, "10"}, {KUPA, "J"}, {KUPA, "Q"}, {KUPA, "K"},
        {MACA, "A"}, {MACA, "2"}, {MACA, "3"}, {MACA, "4"}, {MACA, "5"}, {MACA, "6"}, {MACA, "7"}, {MACA, "8"}, {MACA, "9"}, {MACA, "10"}, {MACA, "J"}, {MACA, "Q"}, {MACA, "K"},
        {SINEK, "A"}, {SINEK, "2"}, {SINEK, "3"}, {SINEK, "4"}, {SINEK, "5"}, {SINEK, "6"}, {SINEK, "7"}, {SINEK, "8"}, {SINEK, "9"}, {SINEK, "10"}, {SINEK, "J"}, {SINEK, "Q"}, {SINEK, "K"}
    };
    int deck_size = sizeof(card_deck) / sizeof(card_deck[0]);
    int used_cards[52] = {0};  // kullanılan kartları bulmak icin burada biraz yardım aldım tam anlayamadım okul acılınca sorucam
    
    printf("Bu program Blackjack oyununu oynar...\n");
    sleep(1);
    // ilk dagıtılan kartlar
    num = rand() % deck_size;
    dealer_cards[0] = card_deck[num];
    used_cards[num] = 1;
    
    num = rand() % deck_size;
    dealer_cards[1] = card_deck[num];
    used_cards[num] = 1;
    

    num = rand() % deck_size;
    player_cards[0] = card_deck[num];
    used_cards[num] = 1;
    
    num = rand() % deck_size;
    player_cards[1] = card_deck[num];
    used_cards[num] = 1;
    
    printf("Kurpiyerin ilk karti: ilk kart gizli ***\n");
    sleep(1);
    printf("Kurpiyerin ikinci karti: %s %s\n\n", dealer_cards[1].sembol, dealer_cards[1].deger);
    sleep(1);
    printf("Oyuncunun kartlari: %s %s, %s %s\n\n", player_cards[0].sembol, player_cards[0].deger, player_cards[1].sembol, player_cards[1].deger);
    
    // oyuncu kart çekme sekansı
    int i = 2;  // 2 kart çekilmişti önceden
    
    while (1) {
    	sleep(1);
        player_sum = 0;
        for (int j = 0; j < i; j++) {
            if (player_cards[j].deger[0] == 'A') {
                if (selection_for_A == 0) {
                    printf("A karti icin deger seciniz (1 veya 11): "); //As kartının durumu
                    scanf("%c", &player_cards[j].deger);
                    selection_for_A = 1;
                }
            } else if (player_cards[j].deger[0] == 'J' || player_cards[j].deger[0] == 'Q' || player_cards[j].deger[0] == 'K') { // K Q J kartları 10 sayılması icin
                player_sum += 10;
            } else {
                player_sum += atoi(player_cards[j].deger); // atoi fonksiyonu char olan sayilari int degerine donduruyor
            }
        }
        
        printf("Kartlarinin toplami: %d\n", player_sum); // toplam puan
        
        if (player_sum > 21) {
            printf("\n\n***Patladin!***\n\n");
            boomstatus = 1; // iki tarafta patlarsa durumunu bulmak icin kullandım bunu
            break;
        }
        
        int selection;
        printf("Kart cekmek icin 1'e, durmak icin 0'a basiniz: "); // kart cekmek icin
        scanf("%d", &selection);
        
        if (selection == 1) {
            do {
                num = rand() % deck_size;
            } while (used_cards[num]);
            
            player_cards[i] = card_deck[num];
            used_cards[num] = 1; // num olan indisi kullanıldı olarak gosteriyor
            i++;
            printf("%d. kart: %s %s\n", i, player_cards[i-1].sembol, player_cards[i-1].deger);
            sleep(1);
        } else {
            break;
        }
    }
    
    // Kurpiyerin kart çekme sekansı
    int a = 2;
    
    while (1) {
    	sleep(1);
        dealer_sum = 0;
        for (int j = 0; j < a; j++) {
            if (dealer_cards[j].deger[0] == 'J' || dealer_cards[j].deger[0] == 'Q' || dealer_cards[j].deger[0] == 'K') {
                dealer_sum += 10;
            } else {
                dealer_sum += atoi(dealer_cards[j].deger);
            }
        }
        
        printf("\nKurpiyerin kartlari: ");
        for (int j = 0; j < a; j++) {
            printf("%s %s, ", dealer_cards[j].sembol, dealer_cards[j].deger);
            sleep(1);
        }
        
        printf("\nKurpiyerin kartlarinin toplami: %d\n", dealer_sum);
        
        if (dealer_sum > 21) {
            printf("\n***KAZANDIN!***\n"); // burası oyun durumunu gosteriyor
            break;
        } else if (dealer_sum >= 17) {
            if (dealer_sum > player_sum) {
                printf("\n***KAYBETTİN!***\n");
            } else if (dealer_sum == player_sum) {
                printf("\n***BERABERE PARA IADESI!***\n");
            } else {
            	if(boomstatus!=1)
                printf("\n***KAZANDIN!***\n");
                else{
                	printf("\n***KAYBETTIN!***\n");
				}
            }
            break;
        }
        
        do {
            num = rand() % deck_size;
        } while (used_cards[num]);
        
        dealer_cards[a] = card_deck[num];
        used_cards[num] = 1;
        a++;
    }
    
    return 0;
}
