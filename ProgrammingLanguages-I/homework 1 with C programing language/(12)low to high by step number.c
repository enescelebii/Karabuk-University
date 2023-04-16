#include<stdio.h>
int main(){
	int low,high,step;
	printf("lutfen bir low degeri  belirleyiniz\n");
	scanf("%d",&low);
	printf("lutfen bir high degeri belirleyiniz\n");
	scanf("%d",&high);
	printf("lutfen bir step degeri  belirleyiniz\n");
	scanf("%d",&step);
	for(low=low;low<=high;low+=step){
		printf("%d\n",low);
	}
	return 0;
}
