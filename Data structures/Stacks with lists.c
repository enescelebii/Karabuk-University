#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define stack_size 5

struct node {
    int data;
    struct node *next;
};

typedef struct {
    struct node *top;
    int cnt;
} stack;

void push(stack *stk, int number);
int pop(stack *stk);
bool isFull(stack *stk);
bool isEmpty(stack *stk);
void initialize(stack *stk);

int main() {
    int selection, number;
    stack stk_instance;
    stack *stk = &stk_instance;
    initialize(stk);

    while (1) {
        printf("1-Push an item\n"
               "2-Pop an item\n"
               "3-Stack is full?\n"
               "4-Stack is empty\n"
               "5-Initialize\n"
               "6-Exit\n->");
        scanf("%d", &selection);
        switch (selection) {
        case 1:
            if (isFull(stk)) {
                system("cls");
                printf("Stack is full\n");
                break;
            } else {
                printf("Enter a number:");
                scanf("%d", &number);
                push(stk, number);
            }
            break;
        case 2:
            if (isEmpty(stk)) {
                system("cls");
                printf("Stack is empty\n");
                break;
            } else {
                printf("Number : %d\n", pop(stk));
            }
            break;
        case 3:
            if (isFull(stk)) {
                system("cls");
                printf("YES! Stack is FULL\n");
            } else {
                system("cls");
                printf("NO! Stack is not FULL\n");
            }
            break;
        case 4:
            if (isEmpty(stk)) {
                system("cls");
                printf("YES! Stack is EMPTY\n");
            } else {
                system("cls");
                printf("NO! Stack is not EMPTY\n");
            }
            break;
        case 5:
            system("cls");
            initialize(stk);
            printf("Stack successfully initialized...\n");
            break;
        case 6:
            exit(0);
        }
    }
    return 0;
}

bool isEmpty(stack *stk) {
    return (stk->cnt == 0);
}

bool isFull(stack *stk) {
    return (stk->cnt == stack_size);
}

void push(stack *stk, int x) {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = stk->top; // bir önceki elemanı bağlıyoruz
    stk->top = temp; // temp değeri en başa geliyor
    stk->cnt++;
}

int pop(stack *stk) {
    int x = stk->top->data;
    struct node *temp = stk->top; // pop yapacağımız eleman
    stk->top = stk->top->next; // top bir öncekine kayıyor
    stk->cnt--;
    free(temp);
    return x;
}

void initialize(stack *stk) {
    stk->cnt = 0;
    stk->top = NULL;
}
