#include<stdio.h>
int digit_count(int);
int main(){
	int num;
	printf("basamak adedini bulur\nlutfen bir sayi giriniz: ");
	scanf("%d",&num);
	printf("sonuc: %d",digit_count(num));
	return 0;
}
int digit_count(int num){
	if(num<=0){
		return 0;
	}
	return 1 + digit_count(num/10);
}