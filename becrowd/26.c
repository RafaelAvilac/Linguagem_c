/*26. Faca um algoritmo que encontre o primeiro multiplo de 11, 13 ou 17 ap ´ os um n ´ umero ´
dado.*/
// Created by rafae on 24/04/2026.
//
#include <stdio.h>
int main() {
    int n, cont = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);
    int i = n +1;

   while (cont == 0) {
       if (i % 11 == 0 || i % 13 == 0 || i % 17 == 0 ) {
           printf("Numero encontrado: %d", i);
           cont++;
       }
       i++;
   }

    return 0;
}