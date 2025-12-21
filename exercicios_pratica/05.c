#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int gerar_numero() {
    return rand() % 10 + 1; // 1 a 10
}

int receber_palpite() {
    int numero;

    printf("Informe seu palpite (1 a 10): ");
    scanf("%d", &numero);

    while (numero < 1 || numero > 10) {
        printf("Palpite invalido.\nInforme novo palpite (1 a 10): ");
        scanf("%d", &numero);
    }

    return numero;
}

int main() {
    setlocale(LC_ALL, "");
    srand(time(NULL));

    int numero_aleatorio = gerar_numero();
    int palpite;
    int tentativas = 0;

    do {
        palpite = receber_palpite();
        tentativas++;

        if (palpite < numero_aleatorio) {
            printf("Errado! O numero sorteado é MAIOR.\n\n");
        } 
        else if (palpite > numero_aleatorio) {
            printf("Errado! O numero sorteado é MENOR.\n\n");
        }

    } while (palpite != numero_aleatorio);

    printf("Parabens! Voce acertou.\n");
    printf("Numero sorteado: %d\n", numero_aleatorio);
    printf("Tentativas: %d\n", tentativas);

    return 0;
}

