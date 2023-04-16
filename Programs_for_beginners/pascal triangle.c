#include <stdio.h>

// Fonksiyon prototipi
int factorial(int);

int main() {
   int i, j, satir;

   printf("satir belirleyiniz: ");
   scanf("%d", &satir);

   for (i = 0; i < satir; i++) {
      for (j = 0; j < satir-i-1; j++) {
         printf(" ");
      }
      for (j = 0; j <= i; j++) {
         printf("%d ", factorial(i) / (factorial(j) * factorial(i-j)));
      }
      printf("\n");
   }

   return 0;
}

// Faktöriyel hesaplama fonksiyonu
int factorial(int n) {
   int i, result = 1;

   for (i = 1; i <= n; i++) {
      result *= i;
   }

   return result;
}
