/*Exercício 16 — String básica (primeiro contato)
Enunciado

Declare uma string para armazenar um nome
Leia o nome do usuário
Mostre:
o nome digitado
o tamanho do nome (quantos caracteres)*/

#include <stdio.h>
#include <string.h>

int main(void){

	char nome[50];

	
	printf("Digite um nome: ");
	fgets(nome, 50, stdin);
	
	printf("Nome: %s", nome);

    size_t tamanho = strlen(nome);
     
     if (tamanho > 0 && nome[tamanho - 1] == '\n'){
     	
     	nome[tamanho - 1] = '\0';
     	tamanho--;
	 }
	
	printf("Tamanho da String: %zu", tamanho);
	
	return 0;
}
