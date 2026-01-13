/*Exercício 16.2 — Contagem manual de caracteres

Relembrando o enunciado:
Leia um nome com fgets
Remova o \n
Conte manualmente os caracteres (sem strlen)

Mostre:
tamanho contado manualmente
tamanho via strlen
Compare os dois valores*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
	
	char nome[50];
	int cont = 0;
	
	printf("\nInforme um nome: ");
	fgets(nome, 50, stdin);
	
	size_t tamanho = strlen(nome);
	
	if(tamanho > 0 && nome[tamanho- 1] == '\n'){
		nome[tamanho - 1] = '\0';
	}
	
	
	for(int i = 0; nome[i] != '\0'; i++){
		if(nome[i] != '\n'){
			cont++;
		}
	}
	
	printf("Nome: %s\nTamanho da string: %d", nome, cont);
	
	return 0;
}
