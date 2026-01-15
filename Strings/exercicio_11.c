						/*Exercício Integrador 2 — Busca em Vetor de Strings
Enunciado

Crie um programa em C que:
Leia 5 nomes (até 50 caracteres cada), utilizando fgets
Armazene os nomes em um vetor de strings
Leia um nome para busca
Informe:
se o nome existe no vetor
em qual posição (índice ou posição humana) ele foi encontrado
Caso o nome não exista, informe corretamente ao usuário
Requisitos obrigatórios
Usar fgets para todas as strings
Remover o \n das strings
Comparar strings usando strcmp
Usar laço para a busca
Não usar == para comparar strings*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define NOMES 5
#define CARACT 50

int main(void){
	setlocale(LC_ALL, "");
	char nomes[NOMES][CARACT];
	char buscar[CARACT];
	int retorno = 0;
	
	for(int i = 0; i < NOMES; i++){
		printf("Informe a %dºstring: ", i + 1);
		fgets(nomes[i], CARACT, stdin);
		nomes[i][strcspn(nomes[i],"\n")] = '\0';
	}
	
	printf("Informe a palavra para busca: ");
	fgets(buscar, CARACT, stdin);
	buscar[strcspn(buscar,"\n")] = '\0';
	
	for(int i = 0; i < NOMES; i++){

		if (strcmp(nomes[i],buscar) == 0){
			printf("Palavra '%s' encontrada na %dº posição .\n", buscar, i + 1);
			retorno = 1; 
		break;
        }
	}
	
	if(retorno == 0){
		printf("Palavra não encontrada.\n");
	}
	
	for(int i= 0; i < NOMES;i++){
		strupr(nomes[i]);
		printf("%dº: %s\n" ,i + 1, nomes[i]);
	}
	
	return 0;
}
