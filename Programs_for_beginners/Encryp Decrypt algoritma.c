#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>
int main(){
	int selection;
	char str[100];
	printf("Bu program Encrypt/Decrypt Algoritmasidir. Key kismi istedigimiz gibi degistirilebilir.\n");
	printf("bir string giriniz:");gets(str);
	printf("1 for Encrypt\n2 for Decrypt\n");
	scanf("%d",&selection);
	switch (selection){
		case 1:
			for(int i=0;i<100 && str[i]!=NULL;i++)
				str[i] = str[i] + 3; //bu islem stringdeki her karaktere ascii tablosunda 3 adım oteye tasir daha komplike seyler yapilabilr
			printf("Encrypted string:%s",str);
			break;
		case 2:
			for(int i=0;i<100 && str[i]!=NULL;i++)
				str[i] = str[i] - 3; //bu islem stringdeki her karaktere ascii tablosunda 3 adım oteye tasir daha komplike seyler yapilabilr
			printf("Decrypted string:%s",str);
			break;
	}
}