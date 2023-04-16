#include<stdio.h>

int main(){
	int A;
	printf("lutfen tam bir sayi giriniz\n");
	scanf("%d",&A);
	if(A%2==1){
		printf("giriginiz sayi tektir");
	}
	else if(A%2==0){
		printf("girdiginiz sayi cifttir");
	}
	else{
		printf("giridiginiz sayi ne cift ne tektir");
	}
				return 0;
}
