#include <stdio.h>
	int low,x;
	int high;
	int sum=0;
	int main(){
	printf("type an low number\n");
	scanf("%d",&low);
	printf("type an high number\n");
	scanf("%d",&high);
	if(low>high){
		x=low;
		low=high;
		high=x;
	}
	for(low=low;low!=high+1;low++){
		sum+=low;
		}
		printf("%d\n",sum);
		return 0;
}
