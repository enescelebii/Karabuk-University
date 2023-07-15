#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>
int main(){
	int f=0,b=0,fb=0;
	printf("Bu program 1 den 100  kadar fizzbuzz oyununu oynar...");
	sleep(3);
	system("cls");
	for(int i=1;i<101;i++){
		printf("	%i	",i);
		if(i%5==0 && i%3==0){
			printf("FizzBuzz");
			fb++;
		}
		if(i%5!=0 && i%3==0){
			printf("Fizz");
			f++;
		}
		if(i%5==0 && i%3!=0){
			printf("Buzz");
			b++;
		}
		printf("\n\n	Fizz:%d	Buzz:%d	FizzBuzz:%d",f,b,fb);
		sleep(1);
		system("cls");
	}
	return 0;
}