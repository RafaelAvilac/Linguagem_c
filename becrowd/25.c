/*25. Fac¸a um programa que some todos os numeros naturais abaixo de 1000 que s ´ ao m ˜ ultiplos ´
de 3 ou 5.*/
// Created by rafael on 24/04/2026.
//
#include <stdio.h>
#define TAM 1000
int main() {

    int soma = 0;

    for (int i = 0; i < TAM; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            soma += i;
        }
    }
    printf("Soma: %d\n", soma);

    return 0;
}