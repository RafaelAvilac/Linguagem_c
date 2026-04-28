//
// Created by rafae on 25/04/2026.
//
#include <stdio.h>

int main() {
    int n = 5; // Número de linhas
    int i, j;

    // Parte superior e meio
    for (i = 1; i <= n; i++) {
        // Imprime espaços: diminui de (n-1) para 0
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Imprime asteriscos: constante (n)
        for (j = 1; j <= n; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}