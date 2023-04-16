#include <stdio.h>
#include <string.h>

int main(){
	int A;
	int B;
	int X;
	scanf("%d" , &A);
	scanf("%d", &B);
	X = B;
	B = A;
	A = X;
	printf("%d %d" , A , B );
	
	getchar();
	return 0;
}
