/*Exercício 3 — Resumo do Enunciado

Crie um programa em C que:

Leia dois números inteiros a e b
Exiba um menu com opções usando switch-case:
Somar
Subtrair
Multiplicar
Dividir (validar divisão por zero com while)
Trocar os valores de a e b
Sair
O menu deve repetir até o usuário escolher sair
Cada opção deve chamar uma função diferente
Todas as funções devem receber ponteiros para a e b
Todas as alterações devem ser feitas via ponteiros
Após cada operação, exibir os valores atualizados de a e b*/

#include <stdio.h>
#include <locale.h>

#include <stdio.h>
#include <locale.h>

void somar(int *a, int *b) {
    int total = *a + *b;
    printf("\n--- Resultado ---\n");
    printf("%d + %d = %d\n", *a, *b, total);
    printf("\nValores atuais:\na = %d\nb = %d\n", *a, *b);
}

void subtrair(int *a, int *b) {
    int total = *a - *b;
    printf("\n--- Resultado ---\n");
    printf("%d - %d = %d\n", *a, *b, total);
    printf("\nValores atuais:\na = %d\nb = %d\n", *a, *b);
}

void multiplicar(int *a, int *b) {
    int total = *a * *b;
    printf("\n--- Resultado ---\n");
    printf("%d x %d = %d\n", *a, *b, total);
    printf("\nValores atuais:\na = %d\nb = %d\n", *a, *b);
}

void dividir(int *a, int *b) {
    // Validação com while conforme solicitado
    while(*b == 0) {
        printf("\nErro: Divisão por zero!\n");
        printf("Informe um novo valor para b: ");
        scanf("%d", b);
    }
    
    float total = (float)*a / *b;
    printf("\n--- Resultado ---\n");
    printf("%d / %d = %.2f\n", *a, *b, total);
    printf("\nValores atuais:\na = %d\nb = %d\n", *a, *b);
}

void trocar_valores(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    
    printf("\n--- Valores Trocados ---\n");
    printf("Novos valores:\na = %d\nb = %d\n", *a, *b);
}

void exibir_menu(void) {
    printf("\n======== Menu ========\n");
    printf("[1] Somar\n");
    printf("[2] Subtrair\n");
    printf("[3] Multiplicar\n");
    printf("[4] Dividir\n");
    printf("[5] Trocar valores\n");
    printf("[0] Sair\n");
    printf("======================\n");
    printf("Digite a opção desejada: ");
}

int validar_opcao(int *opcao) {
    // Valida e retorna 1 para continuar, 0 para sair
    while(*opcao < 0 || *opcao > 5) {
        printf("Opção inválida!\n");
        printf("Digite uma opção válida (0-5): ");
        scanf("%d", opcao);
    }
    
    return (*opcao != 0); // Retorna 0 se escolheu sair, 1 caso contrário
}

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    
    int a, b, opcao;
    int continuar = 1;
    
    // Lê os números iniciais apenas uma vez
    printf("Informe o número a: ");
    scanf("%d", &a);
    
    printf("Informe o número b: ");
    scanf("%d", &b);
    
    // Loop principal do menu
    while(continuar) {
        exibir_menu();
        scanf("%d", &opcao);
        
        // Valida a opção e verifica se deve continuar
        continuar = validar_opcao(&opcao);
        
        if(!continuar) {
            printf("\nEncerrando programa...\n");
            break;
        }
        
        // Executa a operação escolhida
        switch(opcao) {
            case 1:
                somar(&a, &b);
                break;
            case 2:
                subtrair(&a, &b);
                break;
            case 3:
                multiplicar(&a, &b);
                break;
            case 4:
                dividir(&a, &b);
                break;
            case 5:
                trocar_valores(&a, &b);
                break;
        }
    }
    
    return 0;
}
