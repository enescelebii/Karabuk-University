#include <stdio.h>
int main(){
	int low,high,num,d;
	printf("lutfen bir low degeri giriniz\n");
	 scanf("%d",&low);
	printf("lutfen bir high degeri giriniz\n");
	 scanf("%d",&high);
	printf("lutfen bir num degeri giriniz\n");
	 scanf("%d",&num);
	for(low=low;low<high+1;low++){
		if(low%num==0){
			printf("%d\n",low);
			}
		}
	return 0;
}
