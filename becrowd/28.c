/*Escreva um programa que leia um número inteiro positivo N e imprima na tela um quadrado de asteriscos de tamanho N x N.

Exemplo para N = 4:*/
// Created by rafae on 25/04/2026.
//
#include<stdio.h>
int main() {
    int d;

    printf("Digite a dimensao do quadrado:. ");
    scanf("%d",&d);
    while(d<0) {
        printf("Digite a dimencao do quadrado: ");
        scanf("%d",&d);
    }
    for (int i = 0; i < d; ++i) {
        for (int j = 0; j < d; ++j) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}