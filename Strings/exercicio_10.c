/*Exercício Integrador 1 — Básico (aquecimento controlado)
Enunciado
Crie um programa em C que:
Leia 3 nomes (até 50 caracteres cada)
Armazene em um vetor de strings
Mostre todos os nomes digitados
Mostre qual nome tem o maior tamanho
O que está sendo avaliado
Vetor de strings (char nomes[3][50])
fgets + remoção de \n
strlen
Laço correto
Comparação simples*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "");
	char nomes[3][50];
	
	for(int i = 0; i < 3; i++){
		printf("Informe o %dº nome: ", i +1);
		fgets(nomes[i], 50, stdin);	
		nomes[i][strcspn(nomes[i], "\n")] = '\0';  // TRUQUE DE MESTRE: strcspn // Ela procura o '\n'. Se achar, troca por '\0'.
	}
	
	int maior_tamanho = 0;
	int indice_maior = 0;
	
	for(int i = 0; i < 3; i++){
		if(strlen(nomes[i]) > maior_tamanho){
			maior_tamanho = strlen(nomes[i]);
			indice_maior = i;	
		}
	}
	printf("\n--- Lista Limpa ---\n");
	for(int i = 0; i < 3; i++){
		printf("\n%dº nome: %s \n",i +1, nomes[i]);
	}
	printf("\nMaior nome é %s\nTamanho %d", nomes[indice_maior], maior_tamanho);	
		
	return 0;
}
