#include<stdio.h>
int main(){
	int degree;
	printf("lutfen bir derece giriniz\n");
	scanf("%d",&degree);
	if(degree<=0){
		printf("girdiginiz derece donma noktasindan assadadir");
	}
	else{
		printf("girdiginiz decede donma noktasindan yukaridadir");
	}
				return 0;
}
