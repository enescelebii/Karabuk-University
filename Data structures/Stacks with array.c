#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>
#include<unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define stack_size 5

typedef struct {
    int top;
    int data[stack_size];
} stack;

void push(stack *stk, int number);
int pop(stack *stk);
bool isFull(stack *stk);
bool isEmpty(stack *stk);
void reset(stack *stk);

int main() {
    int selection, number;
    stack stk_instance;
    stack *stk = &stk_instance;
    reset(stk);

    while (1) {
        printf("1-Push an item\n"
               "2-Pop an item\n"
               "3-Stack is full?\n"
               "4-Stack is empty\n"
               "5-reset\n"
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
            reset(stk);
            printf("Stack successfully resetd...\n");
            break;
        case 6:
            exit(0);
        }
    }
    return 0;
}

bool isEmpty(stack *stk) {
    return (stk->top == -1 ? true : false);
}

bool isFull(stack *stk) {
    return (stk->top == stack_size -1 ? true : false);
}

void push(stack *stk, int x) {
	stk->data[++stk->top] = x;
}

int pop(stack *stk) {
    int x = stk->data[stk->top--];
    return x;
}

void reset(stack *stk) {
    stk->top = -1;
}
