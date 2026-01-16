/*Exercício Integrador 3 — Prova Completa (Strings + Vetores)
Enunciado

Crie um programa em C que:
Leia 4 frases (até 100 caracteres cada), utilizando fgets
Armazene as frases em um vetor de strings
Para cada frase, mostre:
o texto digitado
o tamanho da frase (quantidade de caracteres)
Ao final, informe:
qual é a frase mais longa
qual é a frase mais curta
Requisitos obrigatórios
Usar fgets para leitura das frases
Remover corretamente o caractere \n
Utilizar strlen para medir o tamanho das frases
Usar laços para percorrer o vetor
Código organizado e legível
Não usar funções fora do padrão ANSI C*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#define FRASES 4
#define CARACT 100

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	char frases[FRASES][CARACT];
	int cont[FRASES], indice_maior = 0, indice_menor = 0;
	
	for(int i = 0; i < FRASES; i++){
		printf("Digite a %dº frase: ", i + 1);
		fgets(frases[i], CARACT, stdin);
		frases[i][strcspn(frases[i], "\n")] = '\0';
			cont[i] = strlen(frases[i]);
	}
	
	for(int i = 0; i < FRASES; i++){
	
		if(cont[i] > cont[indice_maior] ){
			indice_maior = i;
		}
		if(cont[i] < cont[indice_menor]){
			indice_menor = i;
		}
	}
	printf("\n--- Relatório ---\n");
	for(int i = 0; i < FRASES; i++){
		printf("\n%dº frase: %s \nTamanho: %d\n", i + 1, frases[i], cont[i]);
	}
	
	printf("Maior frase: %s\nTamanho: %d\n", frases[indice_maior], cont[indice_maior]);
	printf("Menor frase: %s\nTamanho: %d\n", frases[indice_menor], cont[indice_menor]);
	

	return 0;
}
