#include <stdio.h>
int main(){
	int f,c;
	
  printf("lutfen bir fahrenheit degeri giriniz\n");
    scanf("%d",&f);
    c = (0.55*(f-32));
  printf("girdiginiz derece (celcius)\n");
  printf("%d",c);
  return 0;
}
