/*Escreva um algoritmo que leia um numero inteiro entre 100 e 999 e imprima na sa ´ ´ıda
cada um dos algarismos que compoem o n ˜ umero*/
// Created by rafae on 24/04/2026//
//
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    int n, centena, dezena, unidade;
    printf("Digite um numero entre 100 e 999:  ");
    scanf("%d",&n);
    while(n < 100 || n > 999) {
        printf("Digite um numero entre 100 e 999:  ");
        scanf("%d",&n);
    }
    centena = n / 100;
    dezena = (n / 10) % 10;
    unidade = n % 10;

    printf("Centena: %d\n", centena);
    printf("Dezena: %d\n", dezena);
    printf("Unidade: %d\n", unidade);

    return 0;
}
