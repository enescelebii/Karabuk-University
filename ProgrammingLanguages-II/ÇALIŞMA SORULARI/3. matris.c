#include<stdio.h>
#include<stdlib.h>			//cokksell oldu
int main(){
	int n;
	char *matris;
	printf("bir matris olusturmak icin N sayisi giriniz\n");
	printf("n:");
	scanf("%d",&n);
	matris = (char*)malloc(n*n*sizeof(char));
    for (int i = 0; i < n*n; i++) {
        *(matris + i) = ' ';
    }
	for(int i=0;i<n;i++){
		for(int a=0;a<n;a++){
			if(i%2==0){
				if(a%2==0){
					*(matris + i*n + a)='X';
				}
			}
			else if(i%2==1){
					if(a%2==1){
						*(matris + i*n + a)='X';
					}
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int a=0;a<n;a++){
			printf("%c ",*(matris + i*n + a));
		}
		printf("\n");
	}
	free(matris);
	return 0;
}