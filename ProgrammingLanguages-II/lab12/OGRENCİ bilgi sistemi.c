#include<stdio.h>
#include<stdlib.h>
struct students{
	int no,age;
	char name[50],branch[200];
};
typedef struct students ogrenci;
ogrenci baseStudent = {0,0,"",""};

void creatStudent(FILE *dosya);
void findStudent(FILE *dosya);
void deleteStudent(FILE *dosya);
void rewriteStudent(FILE *dosya);
void listStudent(FILE *dosya);

int main(){
	int selection;
	FILE *dosya;
	
	if((dosya = fopen("students.dat","w"))==NULL)
		printf("dosya olusturulamadi");
	else{
		for(int i=0;i<5;i++){
			fwrite(&baseStudent,sizeof(ogrenci),1,dosya);
		}
	}
	while(1){
		printf("1-ogrenci ekle\n"
		       "2-ogrenci bul (no)\n"
			   "3-ogrenci sil (no)\n"
			   "4-ogrenci kaydi duzenle (no)\n"
			   "5-ogrencilari dosyaya yaz\n"
			   "6-EXIT [1-6] ?:");
		scanf("%d",&selection);
		switch(selection){
			case 1:
				creatStudent(dosya);
				listStudent(dosya);
				break;
			case 2:
				findStudent(dosya);
				break;
			case 3:
				deleteStudent(dosya);
				listStudent(dosya);
				break;
			case 4:
				rewriteStudent(dosya);
				listStudent(dosya);
				break;
			case 5:
				listStudent(dosya);
				break;
			case 6:
				exit(0);
		}
	}
	fclose(dosya);
	return 0;
}
void creatStudent(FILE *dosya){
    int amount;
    int hesapID;
    dosya = fopen("students.dat", "r+");
    if (dosya == NULL){
        printf("Dosya acilamadi\n");
        return;
    }
    ogrenci ogrencibilgi = {0, 0, "", ""};
    printf("Ogrenci no?:");
    scanf("%d", &hesapID);
    fseek(dosya, (hesapID - 1) * sizeof(ogrenci), SEEK_SET);
    fread(&ogrencibilgi, sizeof(ogrenci), 1, dosya);
    if (ogrencibilgi.no != 0){
        printf("%d nolu ogrenci zaten mevcut\n", ogrencibilgi.no);
    }
	else{
        ogrencibilgi.no = hesapID;
        printf("Ogrenci isim?:");
        scanf("%s", ogrencibilgi.name);
        printf("Ogrenci yas?:");
        scanf("%d", &ogrencibilgi.age);
        printf("Ogrencinin bolumu?:");
        scanf("%s", ogrencibilgi.branch);
        fseek(dosya, (hesapID - 1) * sizeof(ogrenci), SEEK_SET);
        fwrite(&ogrencibilgi, sizeof(ogrenci), 1, dosya);
        
    }
    fclose(dosya);
}

void findStudent(FILE *dosya){
	int hesapID;
	dosya = fopen("students.dat", "r");

    if (dosya == NULL) {
        printf("Dosya acilamadi\n");
        return;
    }
	ogrenci ogrencibilgi = {0,0,"",""};
	printf("Bulmak istediginiz ogrencinin numarasini giriniz:");scanf("%d",&hesapID);
	fseek(dosya,(hesapID-1)*sizeof(ogrenci),SEEK_SET);
	fread(&ogrencibilgi,sizeof(ogrenci),1,dosya);
	printf("%-10s%-16s%-10s%-10s\n","Ogrenci No","Ogrenci Adı","Ogrenci Yasi","Ogrenci Bolumu");
	printf("%-10d%-16s%-10d%-10s\n",ogrencibilgi.no, ogrencibilgi.name, ogrencibilgi.age, ogrencibilgi.branch);
	fclose(dosya);
}
void deleteStudent(FILE *dosya){
	int hesapID;
	dosya = fopen("students.dat", "r+");

    if (dosya == NULL) {
        printf("Dosya acilamadi\n");
        return;
    }
	ogrenci ogrencibilgi = {0,0,"",""};
	printf("Silmek istediginiz ogrencinin numarasini giriniz:");scanf("%d",&hesapID);
	fseek(dosya,(hesapID-1)*sizeof(ogrenci),SEEK_SET);
	fread(&ogrencibilgi,sizeof(ogrenci),1,dosya);
	printf("%-10s%-16s%-10s%-10s\n","ogrenci no","ogrenci adi","ogrenci yasi","ogrenci bolumu");
	printf("%-10d%-16s%-10d%-10s\n",ogrencibilgi.no,ogrencibilgi.name,ogrencibilgi.age,ogrencibilgi.branch);
	fseek(dosya,(hesapID-1)*sizeof(ogrenci),SEEK_SET);
	fwrite(&baseStudent,sizeof(ogrenci),1,dosya);
	printf("\n*** ogrenci silinmistir ***\n\n");
	fclose(dosya);
}
void rewriteStudent(FILE *dosya){
	int hesapID;
	dosya = fopen("students.dat", "r+");

    if (dosya == NULL) {
        printf("Dosya acilamadi\n");
        return;
    }
	ogrenci ogrencibilgi = {0,0,"",""};
	printf("Degistirmek istediginiz ogrencinin numarasini giriniz:");scanf("%d",&hesapID);
	fseek(dosya,(hesapID-1)*sizeof(ogrenci),SEEK_SET);
	fread(&ogrencibilgi,sizeof(ogrenci),1,dosya);
	printf("ogrenci isim soyisim?:");gets(ogrencibilgi.name);
	printf("ogrenci yas?:");scanf("%d",ogrencibilgi.age);
	printf("ogrenci bolumu?:");gets(ogrencibilgi.branch);
	fseek(dosya,(hesapID-1)*sizeof(ogrenci),SEEK_SET);
	fwrite(&ogrencibilgi,sizeof(ogrenci),1,dosya);
	printf("\n*** ogrenci Guncellenmistir ***\n\n");
	fclose(dosya);
}
void listStudent(FILE *dosya) {
    FILE *ogrenciler;
    ogrenci ogrencibilgi = {0, 0, "", ""};
    dosya = fopen("students.dat", "r");

    if (dosya == NULL) {
        printf("Dosya acilamadi\n");
        return;
    }

    if ((ogrenciler = fopen("ogrenciler.txt", "w")) == NULL) {
        printf("Dosya olusturulamadi\n");
        return;
    }

    fprintf(ogrenciler, "%-16s%-16s%-16s%-16s\n", "Ogrenci no", "Ogrenci adi", "Ogrenci yasi", "Ogrenci bolumu");

    while (fread(&ogrencibilgi, sizeof(ogrenci), 1, dosya)) {
        if (ogrencibilgi.no != 0) {
            fprintf(ogrenciler, "%-16d%-16s%-16d%-16s\n", ogrencibilgi.no, ogrencibilgi.name, ogrencibilgi.age, ogrencibilgi.branch);
        }
    }

    fclose(dosya);
    fclose(ogrenciler);
}

