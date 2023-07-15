#include<stdio.h>
#include<time.h>// deneysel eglenceli bir sey yaptım bir kac yeni fonksiyon da kullanmis oldum:D
#include<stdlib.h>//vakit bulursam aynisini pointer ile yapıcam
int square; // size of the square
void square1();
void main(){
	srand(time(NULL));
	square=rand()%10+5;//random size for square
	if(square%2==0)square++;
	square1();}
void square1(){
	while(1){
		static int status=0;// path direction
		static char a=48;
		static int path=0;
		if(path<10&&status==0) path++;
		else if(path>0){
			status=1;
			path--;
		}else status=0;
		for(int line=0;line<path;line++){
			printf("\n");//new lines
		}
		a= rand()%80+47;// selecting random char between 47-127 ascii
		for(int i=0;i<square;i++){
			for(int line=0;line<path;line++){
				printf("   ");//distance from edge
			}
			for(int b=0;b<square;b++){
				if(i==square/2&&b==square/2){
					printf("  ");
					//printf("X ");
					continue;//I want to put a gap in the middle at random.actually we can creat every shape in the middle
				}
				printf("%c",a);
				printf(" ");
			}
			printf("\n");
		}
		usleep(50000);//command typed in milliseconds to see the square
		system("cls");//console eraser
	}
}