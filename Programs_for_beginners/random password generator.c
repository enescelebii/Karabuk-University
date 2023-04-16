#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(NULL));
	char character;
	int random;
	int size;
	size=rand()%10 + 5;
	char password[size];
	for(int i=0;i<size;i++){
		character=rand()%126 + 32;
		password[i]=character;
	}
	printf("password: %s",password);
}
