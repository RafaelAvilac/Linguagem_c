/*24. Escreva um programa que leia um numero inteiro e calcule a soma de todos os divisores ´
desse numero, com excec¸ ´ ao dele pr ˜ oprio. Ex: a soma dos divisores do n ´ umero 66 ´ e´
1 + 2 + 3 + 6 + 11 + 22 + 33 = 78*/
// Created by rafae on 24/04/2026.
//
#include <stdio.h>
int main() {
    int n, soma = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }
    printf("Soma: %d", soma);
    return 0;
}
