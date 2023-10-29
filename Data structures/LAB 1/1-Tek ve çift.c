#include<stdio.h>
#include<stdlib.h>

struct node{
    int sayi;
    struct node *next;
};
typedef struct node node;
node *head = NULL;

void arrange_it();
void printlist(node *head);

int main(){
    printf("Tek sayilari başa, cift sayilari sona yerleştiren SLL programi\n");
    arrange_it();
    printlist(head);
    return 0;
}

void arrange_it(){
    int data = 0;
    printf("-1 girene kadar liste devam edecektir\n\n");

    printf("ilk degeri giriniz:");
    scanf("%d", &data);
    head = (node*)malloc(sizeof(node));
    head->sayi = data;
    head->next = NULL;

    printf("Sayi giriniz:");
    scanf("%d", &data);

    while(data != -1){
        node *temp = (node*)malloc(sizeof(node));
        temp->sayi = data;
        temp->next = NULL;

        if(data % 2 != 0){
            temp->next = head;
            head = temp;
        } else {
            node *last = head;
            while(last->next != NULL){
                last = last->next;
            }
            last->next = temp;
        }

        printf("Sayi giriniz:");
        scanf("%d", &data);
    }
}

void printlist(node *head){
    printf("Listeniz:\n\n");
    while(head != NULL){
        printf("%d\n", head->sayi);
        head = head->next;
    }
}
