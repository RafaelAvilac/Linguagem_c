/*23. Faca um algoritmo que leia um numero positivo e imprima seus divisores*/
// Created by rafae on 24/04/2026.
//
#include<stdio.h>
int main () {

    int n;
    printf("Digite um numero positivo: ");
    scanf("%d", &n);
        while (n < 1) {
            printf("Digite um numero positivo: ");
            scanf("%d", &n);
        }
    for (int i = 1; i <= n ; ++i) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}