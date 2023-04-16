#include <stdio.h>    // KENDÝM YAPTIM ENES ÇELEBÝ
int fibonacci(int);
int main(){
    int num,result;
    printf("bu program fibonacci degerlerini bulur lutfen bir deger giriniz\n");
    scanf("%d",&num);
    result=fibonacci(num);
    printf("fibonacci(%d)= %d\n", num,result);
    return 0;
}
int fibonacci(x){
    if(x==0)
    return 0;
    else if(x==1)
        return 1;
    return fibonacci(x - 1) + fibonacci(x - 2);
}
