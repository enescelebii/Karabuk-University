#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int findthatshit(int num,int goal);
int main(){
	srand(time(NULL));
	int *num;
	int goal = (rand() % 10 ) + 1;
	printf("Bu program bir sayi tutar onu bulmaya calis\n");
	printf("bir sayi gir\n");scanf("%d",&num);
	findthatshit(num,goal);
	return 0;
}
int findthatshit( int num,int goal){
	if(goal != num){
		if(goal>num){
			printf("daha yuksek bir sayi gir\n");
		}
		else printf("daha kucuk bir sayi gir\n");
		printf("Yanlis bir sayi daha gir\n");scanf("%d",&num);
		return findthatshit(num,goal);
	}
	else
	printf("-%d- sayisini buldun tebrikler simdi siradaki programa gir de neler yaptim bi bak",goal);
	return 0;
}