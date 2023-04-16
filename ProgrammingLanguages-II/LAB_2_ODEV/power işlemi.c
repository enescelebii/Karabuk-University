#include <stdio.h>


int power(int num , int pow){
	if(pow>1){
		return num * power(num,pow-1);
	}
	return num;
}

int main(){
	printf("%d",power(5,3));
	return 0;
}
