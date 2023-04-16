#include <stdio.h>
int main(){
	float feet,centimeter;
	printf("lutfen bir feet uzunlugu giriniz\n");
	scanf("%f",&feet);
	centimeter = (feet*30.48);
	printf("girdiginiz uzunluk (centimeter)\n");
	printf("%f",centimeter);
return 0;
}
