#include<stdio.h>
#include<stdlib.h>
struct student{
	char isim[40];
	int vize,final,no;
	struct student *next;
};
typedef struct student node;

node *head,*nextNode,*previousNode,*bestScore;
double puanHesapla(int vize,int final){
	return (0.4*vize)+(0.6*final);
}
void creatlist(){
	int size;
	printf("Kac ogrenci girilecek:");
	scanf("%d",&size);
	for(int i=0;i<size;i++){
		if(i==0){
			nextNode = (node*)malloc(sizeof(node));
			head = nextNode;
		}
		else{
			nextNode->next= (node*)malloc(sizeof(node));
			nextNode = nextNode->next;
		}
		printf("Ogrenci adi:");scanf("%s",nextNode->isim);
		printf("Ogrenci numarasi:");scanf("%d",&nextNode->no);
		printf("Ogrenci vize notu:");scanf("%d",&nextNode->vize);
		printf("Ogrenci final notu:");scanf("%d",&nextNode->final);
	}
	nextNode->next=NULL;
}
void addStudent(){
	int kayitNo;
	node *q,*p;
	nextNode->next=(node*)malloc(sizeof(node));
	nextNode=nextNode->next;
	printf("Ogrenci adi:");scanf("%s",nextNode->isim);
	printf("Ogrenci numarasi:");scanf("%d",&nextNode->no);
	printf("Ogrenci vize notu:");scanf("%d",&nextNode->vize);
	printf("Ogrenci final notu:");scanf("%d",&nextNode->final);
	
	printf("Hangi kayittan oncesine eklemek istiyorsunuz");
	printf("\nListe sonuna eklemek icin 0 girin:");
	scanf("%d",&kayitNo);
	p=head;
	if(p->no== kayitNo){
		nextNode->next=p;
		head= nextNode;	
	}else{
		while(p->next!=NULL){
			q=p;
			p=p->next;
			if(p->no==kayitNo) break;
		}
		if(p->no==kayitNo){
			q->next=nextNode;
			nextNode->next=p;
			p->next=NULL;
		}
		else if(p->next==NULL){
			p->next=nextNode;
			nextNode->next=NULL;
		}
	}
}
void deleteStudent(){
	int kayitNo;
	node *q,*p;
	printf("Silinecek ogrenci numarasini giriniz:");scanf("%d",&kayitNo);
	p=head;
	if(p->no==kayitNo){
		head=p->next;
		free(p);
	}else{
		while(p->next!=NULL){
			if(p->no==kayitNo) break;
			else{
				q=p;
				p=p->next;
			}
		}
		if(p->no==kayitNo){
			q->next=p->next;
			free(p);
		}else if(p->next==NULL){
			printf("boyle bir numara yok\n");
		}
	}
}
void findBestScore(){
	double puan=0;
	node *p;
	p=head;
	bestScore= head;
	while(p->next!=NULL){
		p=p->next;
		if(puanHesapla(p->vize,p->final)>puanHesapla(bestScore->vize,bestScore->final));
		bestScore=p;
	}
	printf("En basarili ogrenci:\n");
	printf("No:%d - Ad: %s  Basari Notu:%.2f\n",bestScore->no,bestScore->isim,puanHesapla(bestScore->vize,bestScore->final));
}
void classAverage(){
	double ortalama=0,toplam=0;
	int sayac=0;
	node *p;
	p=head;
	if(p==NULL){
		printf("Listede kayit yok");
	}
	else{
		while(p!=NULL){
			sayac++;
			toplam+=puanHesapla(p->vize,p->final);
			p=p->next;
			
		}
		ortalama=toplam/sayac;
		printf("Basari Notu Ortalamasi:%.2f\n",ortalama);
	}
}
void be_listed(){
	double donemNotu=0;
	node *p;
	p=head;
	while(p!=NULL){
		printf("\n ************* \n");
		printf("Ogrenci No:%d\t",p->no);
		printf("Ogrenci Adi:%s\t\t",p->isim);
		printf("Ogrenci Vize:%d\t\t",p->vize);
		printf("Ogrenci Final:%d\t",p->final);
		donemNotu=p->vize*0.4+p->final*0.6;
		printf("Ogrenci Donem Notu:%.2f\t",puanHesapla(p->vize,p->final));
		printf("\n ************* \n");
		p=p->next;
	}
}

void main(){
	int selection;
	printf("1-liste olustur\n2-Ogrenci ekle\n3-Ogrenci sil\n4-En basarili ogrenci\n5-Sinif not ortalamasi");
	while(1){
		printf("\nSecim yapin [1-5]:");
		scanf("%d",&selection);
		switch(selection){
			case 1:creatlist();be_listed();
				break;
			case 2:addStudent();be_listed();
				break;
			case 3:deleteStudent();be_listed();
				break;
			case 4:findBestScore();
				break;
			case 5:classAverage();
				break;
		}
	}
}
