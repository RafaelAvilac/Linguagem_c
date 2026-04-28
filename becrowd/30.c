/*Escreva um programa que leia um número inteiro positivo N e imprima a tabuada de 1 até N
 *no seguinte formato lado a lado:
Exemplo para N = 4:*/
// Created by rafae on 25/04/2026.
//
#include <stdio.h>
int main() {

    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    while (n <= 0) {
        printf("Digite um numero: ");
        scanf("%d", &n);
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d x %d= %-4d", j,i,j*i);
        }
        printf("\n");
    }
    return 0;
}