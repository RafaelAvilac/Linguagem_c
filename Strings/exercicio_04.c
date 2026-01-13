/*Exercício 16.1 — Leitura segura e limpeza de \n
Enunciado

Declare uma string char frase[100];
Leia uma frase do usuário usando fgets
Remova o \n apenas se existir
Mostre a frase sem o \n
Mostre o tamanho correto da string*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
	
	char frase[100];
	
	printf("Escreva uma frase: ");
	fgets(frase, 100, stdin);
	
	size_t tamanho = strlen(frase);
	
	if(tamanho > 0 && frase[tamanho- 1] == '\n'){
		frase[tamanho - 1] = '\0';
		tamanho--;
	}
	printf("Frase: %s\nTamanho: %zu", frase, tamanho);
	
	return 0;
}
