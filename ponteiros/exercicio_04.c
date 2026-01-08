/*Exercício 4: Matriz Dinâmica com Soma de Linhas
Aloque dinamicamente uma matriz m x n, preencha-a e imprima a soma de cada linha.*/



#include <stdio.h>
#include <stdlib.h>




int main(void){
	
	int linhas, colunas, **matriz, soma = 0;
	
	printf("Informe quantidade de linhas: ");
	scanf("%d", &linhas);
	
	printf("Informe quantidade de colunas: ");
	scanf("%d", &colunas);
	
	matriz = malloc(linhas * sizeof(*matriz));
	if(matriz == NULL){
		printf("ERRO");
		return 1;
	}
	
	for(int i = 0; i < linhas; i++){
		soma = 0;
		matriz[i] = malloc(colunas * sizeof(*matriz));
			if(matriz == NULL){
			printf("ERRO");
			return 1;
		}
		
		for(int j = 0; j < colunas; j++){
			printf("\nInforme o valora para a posicao [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
			soma += matriz[i][j];
		}
		printf("\nSoma: %d", soma);
	}
	
	free(matriz);
	return 0;
}
