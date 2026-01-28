/*Exercício 1 — Leitura e Impressão

Objetivo:
Ler uma matriz 3x3 de inteiros e imprimi-la no formato de matriz.

Conceitos fixados:
declaração de matriz
dois laços for
acesso matriz[i][j]*/

#include <stdio.h>
#include <locale.h>
#define LIN 3
#define COL 3

void preencher(int matriz[][COL]){
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("Informe o %dº número para o indice [%d][%d]: ", i +1, i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
}

void exibir(int matriz[][COL]){
	printf("Matriz formatada.\n");
	
	for(int i = 0; i < LIN; i++){
		printf("| ");
		for(int j = 0; j < COL; j++){
			printf("%3d", matriz[i][j]);
			
		}
		printf(" |\n");
	}
}
int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int matriz[LIN][COL];
	
	preencher(matriz);
	exibir(matriz);
	return 0;
}

