#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <unistd.h>

#define size 100

struct node {
    int sayi;
    struct node *next;
};

typedef struct node node;
node *head = NULL;

void arrange();
void createList(int dizi[], int n);
void bubbleSort(int arr[], int n);
void printlist(node *head);

int main() {
    srand(time(NULL));
    printf("random size sayiyi kucukten buyuye siralayan SLL program");
    arrange();
    return 0;
}

void arrange() {
    int dizi[size];
    printf("random 100 sayi uretiliyor....");
    sleep(1);
    for (int i = 0; i < size; i++) {
    	usleep(100);
        dizi[i] = rand() % size + 1;
    }
    bubbleSort(dizi, size);
}

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    createList(arr, size);
}

void createList(int dizi[], int n) {
    head = (node *)malloc(sizeof(node));
    head->sayi = dizi[0];
    node *temp = head;
    for (int i = 1; i < n; i++) {
        temp->next = (node *)malloc(sizeof(node));
        temp = temp->next;
        temp->sayi = dizi[i];
    }
    temp->next = NULL;
    printlist(head);
}

void printlist(node *head) {
    printf("Listeniz:\n\n");
    while (head != NULL) {
        printf("%d\n", head->sayi);
        head = head->next;
    }
}
