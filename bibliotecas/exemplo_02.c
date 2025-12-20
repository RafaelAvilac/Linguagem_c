#include <stdio.h>
#include <string.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "");
	
    char nome[20] = "João";
    char sobrenome[] = " Sílva";

    strcat(nome, sobrenome);

    printf("Nome completo: %s\n", nome);
    printf("Tamanho: %zu\n", strlen(nome));

    if (strcmp(nome, "Joao Silva") == 0) {
        printf("Nome correto!\n");
    } else {
        printf("Nome incorreto!\n");
    }

    return 0;
}

