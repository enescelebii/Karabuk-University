#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>
struct dogum{
	int yil;
	int ay;
	int gun;
};
typedef struct dogum dogumgunu;
int main(){
	int year,mon,day;
	dogumgunu *born = (dogumgunu*)malloc(sizeof(dogumgunu));
	printf("Dogum tarihini yil gun ay seklinde gir\n");
	printf("yil:");
	scanf("%d",&(born->yil));
	printf("ay:");
	scanf("%d",&(born->ay));
	printf("gun:");
	scanf("%d",&(born->gun));
	time_t current;
	struct tm *yzg;
	//time (&current);
	yzg = localtime(&current);
	if (yzg->tm_mon + 1 < born->ay) {
		mon = (yzg->tm_mon + 12 + 1) - born->ay;
		year = yzg->tm_year + 1900 - born->yil - 1;
	}
	else {
		mon = yzg->tm_mon + 1 - born->ay;
		year = yzg->tm_year + 1900 - born->yil;
	}
	if(yzg->tm_mday<born->gun){
		day= (yzg->tm_mday+30)-born->gun;
		mon-=1;
	}else
		day = yzg->tm_mday-born->gun;
	printf("\nYear	Month	Day");
	printf("\n%d\t%d\t%d\t",year,mon,day);
	while(1){
		time_t current_time;
		time(&current_time);
		current_time=current_time%60+1;
		printf("%ld",current_time);
		if(current_time/10>1){
			printf("\b\b");
		}
		else 
		printf("\b");
		sleep(1);
	}
   	return 0;
}