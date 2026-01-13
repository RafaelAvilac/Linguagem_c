/*Exercício 16.3 — Cópia manual de string

Objetivo:
Fixar definitivamente que string = array de char + '\0'.
Enunciado (resumo)
Leia uma string origem com fgets
Remova o \n
Copie caractere por caractere para destin
Finalize destino com '\0'
Mostre as duas strings*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "");
		
	char origem[50], destino[50];
	
	printf("Digite uma frase: ");
	fgets(origem, 50, stdin);
	
	size_t tamanho = strlen(origem);
	if(tamanho > 0 && origem[tamanho - 1] == '\n'){
		origem[tamanho - 1] = '\0';
		tamanho--;
	}
	
	int i;
	for( i = 0; i < tamanho; i++){
		destino[i] = origem[i];
	}
	destino[i] = '\0';
	
	
	printf("Principal: %s \n", origem);
	printf("Copia: %s \n", destino);
	
	
	return 0;
}
