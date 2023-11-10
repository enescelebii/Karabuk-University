#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define stack_size 5

typedef struct stack {
    int top;
    char data[stack_size];
} stack;

void push(stack *stk, char x) {
    if (stk->top < stack_size - 1) {
        stk->data[++stk->top] = x;
    } else {
        printf("Stack is full\n");
    }
}

char pop(stack *stk) {
    if (stk->top >= 0) {
        return stk->data[stk->top--];
    } else {
        printf("Stack is empty.\n");
        return '\0';
    }
}

void reset(stack *stk) {
    stk->top = -1;
}

int main() {
    char dizi[stack_size];			//ENES çelebi 2110206007      09.11.23 14:45 
    int selection;
    stack stk;
    reset(&stk);
    
    while (1) {
        printf("1-reset\n"
               "2-islem gir\n"
               "3-exit\n");
        scanf("%d", &selection);

        switch (selection) {
            case 1:
                system("cls");   //konsol temizleyici
                reset(&stk);
                printf("Stack successfully reset...\n");
                break;
            case 2:
                fflush(stdin);                    		 //fflush scanf gibi fonksiyonlarin buffer kismini siler  
                printf("Parantezlerinizi giriniz: ");
                gets(dizi);
                int length = strlen(dizi);				//strlen dizi uzunlugu olcer \0. elemana kadar
                for (int i = 0; i < length; i++) {
                    if (dizi[i] == '(' || dizi[i] == '[' || dizi[i] == '{') {
                        push(&stk, dizi[i]);
                    } else if (dizi[i] == ')' || dizi[i] == ']' || dizi[i] == '}') {
                        char last = pop(&stk);
                        if (!((dizi[i] == ')' && last == '(') || 
                              (dizi[i] == ']' && last == '[') || 
                              (dizi[i] == '}' && last == '{'))) {
                            printf("Parantezler uyusmuyor.\n");
                            exit(0);
                        }
                    }
                }
                if (stk.top == -1) {						//butun parantezler uyuştu
                    printf("Parantezler uyumlu.\n\n");
                } else {
                    printf("Parantezler uyusmuyor.\n\n");		//stackte fazladan parantez kalirsa uyuşmamiş demektir
                    free(&stk);
                }
                break;
            case 3:
                exit(0);
            default:
                printf("Gecersiz secenek!\n");
                break;
        }
    }
    return 0;
}
