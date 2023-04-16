#include <stdio.h>
int main() {
    char dizi[50];
    char temp;
    char *ch = dizi; 
    int u = 0;
    gets(dizi);
    while(*ch != '\0') { 
        u++;
        ch++;
    }
    ch = dizi; 
    for(int i = 0; i < u/2; i++){
        temp = *(ch + i);
        *(ch + i) = *(ch + u - i - 1);
        *(ch + u - i - 1) = temp;
    }
    ch = dizi; 
    for(int i = 0; i < u; i++, ch++){
        printf("%c", *ch);
    }
    return 0;
}