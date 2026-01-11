/*Exercício 11 — Busca em Vetor
Enunciado
Usando um vetor de 10 posições:
Preencha o vetor
Leia um número
Informe se esse número existe ou não no vetor*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10 

void preencher(int *numeros){
	
	for(int i = 0; i < TAM; i++){
		numeros[i] = rand() % 100 + 1;
	}
}
void exibir(int *numeros){
	printf("Vetor preenchido:\n");
	for(int i = 0; i < TAM; i++){
		printf("%3d ", numeros[i]);
	}
	printf("\n");
}
int busca(int *numeros, int buscar){
	
	for(int i = 0; i < TAM; i++){
		if(numeros[i] == buscar){
			return 1;
		}
	}
	return 0;
}
int main(void){
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	int numeros[TAM], buscar, encontrado;
	
	preencher(numeros);
	exibir(numeros);
	
	printf("Informe um nº para buscar: ");
	scanf("%d", &buscar);
	
	encontrado = busca(numeros, buscar);
	
	if(encontrado){
		printf("O nº %d existe no vetor.\n", buscar);
	}else{
		printf("O nº %d não existe no vetor.\n",buscar);
	}
	
	
	return 0;
}
