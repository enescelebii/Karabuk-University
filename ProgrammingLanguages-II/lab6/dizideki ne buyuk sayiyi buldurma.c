#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,es;
	int *veri;
	
	printf("Eleman sayisi: ");
	scanf("%d",&es);
	
	veri = (int*)calloc(es,sizeof(int));
	if(veri==NULL){
		printf("Hafızada yer kalmadi");
		exit(0);
	}
	for(i=0;i<es;i++){
		printf("%d.sayi: ",i+1);
		scanf("%d",veri+i);
	}
	for(i=1;i<es;i++){
		if(*veri< *(veri+i))
			*veri = *(veri+i);
	}
	printf("En buyuk sayi: %d",*veri);
	return 0;
}