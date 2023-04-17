#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
void snake(int, int, char);
int main(){
    printf("\n\n\n\n");//4
    printf("           ");//11
    snake(11, 4, 'd'); // sol yone dogru  baslıyoruz 'd'
    snake(10,4,'d');
    return 0;
}

void snake(int x, int y, char direction){
    usleep(120000);//gorebilmemiz icin bekleme suresi
    system("cls");//konsol temizleyci
    for(int i=0; i<y; i++)
        printf("\n");
    for(int i=0; i<x; i++)
        printf(" ");
    printf("X");

    if (kbhit()) {//bu fonksiyon bir tusa basilip basilmadigini kontol ediyormus
        char a = getch();//tusa basilirsa 'a' basilan degeri aliyor
        if (a == 'd' || a == 'w' || a == 'a' || a == 's') {
            direction = a;//yon degisimi
        }
    }
    if(direction == 'd'){
        return snake(x+2, y, direction);//yonumuze gore ilerleyen x
    }
    if(direction == 'w'){
        return snake(x, y-1, direction);
    }
    if(direction == 'a'){
        return snake(x-2, y, direction);
    }
    if(direction == 's'){
        return snake(x, y+1, direction);
    }
}
