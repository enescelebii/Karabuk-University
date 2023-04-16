#include<stdio.h>
#include<stdlib.h>

int main(){
    int *dizi, n, temp;
    printf("Bir dizideki cift sayilari basa, tek sayilari sona atan algoritma\n");
    printf("Bir dizi boyutu giriniz: ");
    scanf("%d",&n);
    dizi = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("\n%d. eleman: ",i+1);
        scanf("%d",dizi + i);
    }
    printf("Dizinin ilk hali: ");
    for(int i=0;i<n;i++){
        printf("%d ",*(dizi+i));
    }
    for(int i=0;i<n/2;i++){
        if(*(dizi+i)%2==0){
            continue;
        }							// iki dongunun amacı ilki dizinin ilk yarisi icin ikinci kalan yarisi icin
        for(int j=n-i-1; j>i; j--){
            if(*(dizi+j)%2==0){
                temp=*(dizi+j);
                *(dizi+j)=*(dizi+i);
                *(dizi+i)=temp;
                break;
            }
        }
    }
    printf("\nDizinin son hali: ");
    for(int i=0;i<n;i++){
        printf("%d ",*(dizi+i));
    }
    free(dizi);
    return 0;
}
