#include<stdio.h>
/*Design an algorithm which generates even numbers between 1000 and 2000 */
int main(){
	int A=1000;
	printf("bu program 1000 ile 2000 arasi cift sayilari yazdirir\n");
	for(A=A;A<=2000;A++){
		if(A%2==0){
			printf("%d\n",A);
		}
	}
	return 0;
}
