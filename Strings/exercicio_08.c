/*Exercício 18.1:

Leia uma string usando fgets
Remova o \n
Copie essa string para outra usando strcpy
Mostre a string original e a cópia
Sem laço, sem scanf.*/


#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	char nome[50], nome_2[50];
	
	printf("Digite um nome: ");
	fgets(nome, 50, stdin);
	
	size_t tamanho = strlen(nome);
	
	printf("\n\nString original: %s\n", nome);
	
	if(tamanho > 0 && nome[tamanho - 1] == '\n'){
		nome[tamanho - 1] = '\0';
		tamanho--;
	}
	
	strcpy(nome_2, nome);
	
	printf("String copia: %s\n", nome_2);
	
	return 0;
}
