/*Escreva um programa que leia um número inteiro positivo N e imprima a seguinte escada de números:
Exemplo para N = 5:*/
// Created by rafae on 25/04/2026.
//
#include <stdio.h>
int main() {

    int n;
    printf("Digite um numero positivo: ");
    scanf("%d", &n);
    while (n <= 0) {
        printf("Digite um numero positivo: ");
        scanf("%d", &n);
    }
    for (int i = 1; i <= n ; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}