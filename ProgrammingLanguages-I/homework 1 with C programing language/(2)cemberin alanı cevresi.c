#include <stdio.h>
#include <math.h>
//çemberin veya dairenin r giriþi ile alan veya çevre hesaplayan program
int main(){
	float r;
	int type;
	float area;
	float cevre;
	printf("Bir islem turu seciniz cevre icin 1 i alan icin 2\n");
	scanf("%d" , &type);
	printf("lutfen yaricap giriniz\n");
	scanf("%f" , &r);
	if(type==1){
	cevre = (2*3.14*r);
	printf("cemberin cevresi\n");
	printf("%f\n" , cevre);
	}
	else if(type==2){
	printf("cemberin alani\n");
	area = (3.14*r*r);
	printf("%f\n" , area);
	}
	else{
	printf("yanlis bir durum sectiniz");
	}
	return 0;
}
