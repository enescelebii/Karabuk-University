#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>										//04.11.23 14:37   ENES çelebi 2110206007

#define stack_size 10

typedef struct stack {
    int top;
    int data[stack_size];
} stack;

void push(stack *stk, int number);
int pop(stack *stk);
void reset(stack *stk);

int main() {
    char dizi[stack_size];
    int selection;
    stack *stk;			
    reset(stk);

    while (1) {
        printf("1-reset\n"
               "2-islem gir\n->"
               "3-exit\n");
        scanf("%d", &selection);
        switch (selection) {
            case 1:
                system("cls");
                reset(stk);
                printf("Stack successfully reset...\n");
                break;
            case 2:
                printf("Postfix islem icin degerler giriniz\n->");
                scanf("%s", dizi);
                printf("Hesaplanacak islem: %s\n", dizi);
                for (int i = 0; dizi[i] != '\0'; i++) {
                    if (isdigit(dizi[i])) {
                        push(stk, dizi[i] - 48); //char digitten int e cevirme
                    } else {
                        int a = pop(stk);
                        int b = pop(stk);
                        switch (dizi[i]) {
                            case '+':
                                push(stk, a + b);
                                break;
                            case '-':
                                push(stk, a - b);
                                break;
                            case '*':
                                push(stk, a * b);
                                break;
                            case '/':
                                push(stk, a / b);
                                break;
                            default:
                                system("cls");
                                printf("Yanlis islem girdiniz\n");
                                return 1;
                        }
                    }
                }
                system("cls");
                printf("Sonuc: %d\n", pop(stk));
                exit(0);
                break;
            case 3:
                exit(0);
        }
    }
    return 0;
}

void push(stack *stk, int x) {
    if (stk->top < stack_size - 1) {
        stk->data[++stk->top] = x;
    } else {
        printf("Stack is full\n", x);
    }
}

int pop(stack *stk) {
    if (stk->top >= 0) {
        return stk->data[stk->top--];
    } else {
        printf("Stack is empty.\n");
        return -1;
    }
}

void reset(stack *stk) {
    stk->top = -1;
}
