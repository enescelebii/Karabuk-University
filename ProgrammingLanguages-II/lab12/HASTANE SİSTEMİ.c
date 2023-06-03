#include<stdio.h>
#include<stdlib.h>
struct patients{
	int no,age;
	char name[50],sikayet[200];
};
typedef struct patients hasta;
hasta basePatient = {0,0,"",""};

void creatPatient(FILE *dosya);
void findPatient(FILE *dosya);
void deletePatient(FILE *dosya);
void rewritePatient(FILE *dosya);
void listPatient(FILE *dosya);

int main(){
	int selection;
	FILE *dosya;
	
	if((dosya = fopen("patients.dat","w"))==NULL)
		printf("dosya olusturulamadi");
	else{
		for(int i=0;i<5;i++){
			fwrite(&basePatient,sizeof(hasta),1,dosya);
		}
	}
	while(1){
		printf("1-hasta ekle\n"
		       "2-hasta bul (no)\n"
			   "3-hasta sil (no)\n"
			   "4-hasta kaydi duzenle (no)\n"
			   "5-hastalari dosyaya yaz\n"
			   "6-EXIT [1-6] ?:");
		scanf("%d",&selection);
		switch(selection){
			case 1:
				creatPatient(dosya);
				listPatient(dosya);
				break;
			case 2:
				findPatient(dosya);
				break;
			case 3:
				deletePatient(dosya);
				listPatient(dosya);
				break;
			case 4:
				rewritePatient(dosya);
				listPatient(dosya);
				break;
			case 5:
				listPatient(dosya);
				break;
			case 6:
				exit(0);
		}
	}
	fclose(dosya);
	return 0;
}
void creatPatient(FILE *dosya){
    int amount;
    int hesapID;
    dosya = fopen("patients.dat", "r+");
    if (dosya == NULL) {
        printf("Dosya acilamadi\n");
        return;
    }
    hasta patientinfo = {0, 0, "", ""};
    printf("Hasta no?:");
    scanf("%d", &hesapID);
    fseek(dosya, (hesapID - 1) * sizeof(hasta), SEEK_SET);
    fread(&patientinfo, sizeof(hasta), 1, dosya);
    if (patientinfo.no != 0) {
        printf("%d nolu hasta zaten mevcut\n", patientinfo.no);
    }
	else{
        patientinfo.no = hesapID;
        printf("hasta isim?:");
        scanf("%s", patientinfo.name);
        printf("hasta yas?:");
        scanf("%d", &patientinfo.age);
        printf("hastanin sikayeti?:");
        scanf("%s", patientinfo.sikayet);
        fseek(dosya, (hesapID - 1) * sizeof(hasta), SEEK_SET);
        fwrite(&patientinfo, sizeof(hasta), 1, dosya);
    }
    fclose(dosya);
}

void findPatient(FILE *dosya){
	int hesapID;
	dosya = fopen("patients.dat", "r");

    if (dosya == NULL) {
        printf("Dosya acilamadi\n");
        return;
    }
	hasta patientinfo = {0,0,"",""};
	printf("Bulmak istediginiz hastanin numarasini giriniz:");scanf("%d",&hesapID);
	fseek(dosya,(hesapID-1)*sizeof(hasta),SEEK_SET);
	fread(&patientinfo,sizeof(hasta),1,dosya);
	printf("%-16s%-16s%-16s%-16s\n","hasta No","hasta Adi","hasta Yasi","hasta sikayeti");
	printf("%-16d%-16s%-16d%-16s\n",patientinfo.no, patientinfo.name, patientinfo.age, patientinfo.sikayet);
	fclose(dosya);
}
void deletePatient(FILE *dosya){
	int hesapID;
	dosya = fopen("patients.dat", "r+");

    if (dosya == NULL) {
        printf("Dosya acilamadi\n");
        return;
    }
	hasta patientinfo = {0,0,"",""};
	printf("Silmek istediginiz hastanin numarasini giriniz:");scanf("%d",&hesapID);
	fseek(dosya,(hesapID-1)*sizeof(hasta),SEEK_SET);
	fread(&patientinfo,sizeof(hasta),1,dosya);
	printf("%-16s%-16s%-16s%-16s\n","hasta No","hasta Adi","hasta Yasi","hasta sikayeti");
	printf("%-16d%-16s%-16d%-16s\n",patientinfo.no, patientinfo.name, patientinfo.age, patientinfo.sikayet);
	fseek(dosya,(hesapID-1)*sizeof(hasta),SEEK_SET);
	fwrite(&basePatient,sizeof(hasta),1,dosya);
	printf("*** hasta silinmistir ***\n");
	fclose(dosya);
}
void rewritePatient(FILE *dosya){
	int hesapID;
	dosya = fopen("patients.dat", "r+");

    if (dosya == NULL) {
        printf("Dosya acilamadi\n");
        return;
    }
	hasta patientinfo = {0,0,"",""};
	printf("Degistirmek istediginiz hastanin numarasini giriniz:");scanf("%d",&hesapID);
	fseek(dosya,(hesapID-1)*sizeof(hasta),SEEK_SET);
	fread(&patientinfo,sizeof(hasta),1,dosya);
	printf("hasta isim?:");
    scanf("%s", patientinfo.name);
    printf("hasta yas?:");
    scanf("%d", &patientinfo.age);
    printf("hastanin sikayeti?:");
    scanf("%s", patientinfo.sikayet);
	fseek(dosya,(hesapID-1)*sizeof(hasta),SEEK_SET);
	fwrite(&patientinfo,sizeof(hasta),1,dosya);
	printf("*** hasta Guncellenmistir ***\n");
	fclose(dosya);
}
void listPatient(FILE *dosya) {
    FILE *hastalar;
    hasta patientinfo = {0, 0, "", ""};
    dosya = fopen("patients.dat", "r");

    if (dosya == NULL) {
        printf("Dosya acilamadi\n");
        return;
    }

    if ((hastalar = fopen("hastalar.txt", "w")) == NULL) {
        printf("Dosya olusturulamadi\n");
        return;
    }

    fprintf(hastalar, "%-16s%-16s%-16s%-16s\n", "hasta no", "hasta adi", "hasta yasi", "hasta sikayeti");

    while (fread(&patientinfo, sizeof(hasta), 1, dosya)) {
        if (patientinfo.no != 0) {
            fprintf(hastalar, "%-16d%-16s%-16d%-16s\n", patientinfo.no, patientinfo.name, patientinfo.age, patientinfo.sikayet);
        }
    }

    fclose(dosya);
    fclose(hastalar);
}

