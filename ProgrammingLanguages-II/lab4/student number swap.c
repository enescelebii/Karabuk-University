#include<stdio.h>
void swap(int[],int,int);
void fun1(int[],int,int);
int main(){
	int studentnumber[15];
	int i=0,k,readnum;
	while(1){
		readnum=getch();
		if(readnum==13) break;
		putchar(readnum);
		studentnumber[i]=(int) (readnum-'0');
		i++;
		
	}
	fun1(studentnumber,0,i-1);
	printf("\nthe array after fun1\n");
	for(k=0;k<i;k++){
		printf("%d",studentnumber[k]);
	}
	getch();
	return 0;
}
void swap(int *array,int leftindex,int rightindex){
	int temp;
	temp=array[leftindex];
	array[leftindex]=array[rightindex];
	array[rightindex]=temp;
}
void fun1(int *array,int leftindex,int rightindex){
	if(leftindex<rightindex){
		swap(array,leftindex,rightindex);
		fun1(array,leftindex+1,rightindex-1);
	}
}
