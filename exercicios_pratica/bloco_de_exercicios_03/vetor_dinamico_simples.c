/*Vetor Dinâmico Simples
Objetivo

Ler um valor N, alocar dinamicamente um vetor de N inteiros, preencher e imprimir.

Regras
Usar malloc
Validar N > 0
Usar for
Liberar a memória no final
Conceitos fixados:
alocação básica, acesso por índice, free*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void validar_n(int *n){
		while(*n < 0){
		printf("Digite um valor valido: ");
		scanf("%d", &n);
	}
}
	
void preencher(int *vetor, int n){
	
	printf("\n\nPreencher vetor alocado.\n");
	for(int i = 0; i < n; i++){
		printf("Informe o %dº número: ", i + 1); 
		scanf("%d", &vetor[i]);
	}
}
void exibir_vetor(int *vetor, int n){
	
	printf("\n\nExibir vetor alocado:\n");
		for(int i = 0; i < n; i++){
			printf("\t%3d", vetor[i]); 	
	}
	printf("\n");
}
int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int n;
	int *vetor;
	
	printf("Informe o tamanho do vetor: ");
	scanf("%d", &n);
	validar_n(&n);
	
	vetor = (int *)malloc(n * sizeof(int));
	
	if(vetor == NULL){
		printf("Erro ao alocar memoria.");
		return 1;
	}
	preencher(vetor, n);
	exibir_vetor(vetor, n);
	
	free(vetor);
	return 0; 
}
