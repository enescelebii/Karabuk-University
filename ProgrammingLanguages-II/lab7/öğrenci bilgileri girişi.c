#include<stdio.h>
struct student {
	int number;
	char name[50];
	char surname[50];
	float midtermgrade
};
void main(){
	typedef struct student st;
	st students[10];
	for(int i=0;i<3;i++){
		printf("%d. Enter student number: ",i+1);
		scanf("%d",&students[i].number);
		printf("%d. Enter student name: ",i+1);
		scanf("%s",&students[i].name);
		printf("%d. Enter student surname: ",i+1);
		scanf("%s",&students[i].surname);
		printf("%d. Enter student midterm grade: ",i+1);
		scanf("%f",&students[i].midtermgrade);
		printf("\n");
	}
	for(int i=0;i<3;i++){
		printf("student %d - Number: %d, Name: %s, Surname: %s, MidtermGrade: %lf\n",i+1,students[i].number,students[i].name,students[i].surname,students[i].midtermgrade);	
	}
}