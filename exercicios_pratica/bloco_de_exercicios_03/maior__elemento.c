/*Exercício 5 — Maior Elemento da Matriz

Objetivo:
Encontrar o maior valor da matriz e informar:
o valor
a posição (linha, coluna)
Dica conceitual:
inicialize o maior valor com matriz[0][0]
atualize valor e posição quando encontrar um maior*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define LIN 3
#define COL 3
void preencher(int matriz[][COL]){
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			matriz[i][j] = rand() % 30 + 1;
		}
	}
}
void maior_elemento(int matriz[][COL],int *maior, int *linha, int *coluna){
	 *maior = matriz[0][0];
	
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			if(matriz[i][j] > *maior){
				*maior = matriz[i][j];
				*linha = i;
				*coluna = j;
			}
		}
	}
}
void exibir(int matriz[][COL]){
	printf("Matriz formatada.\n");
	
	for(int i = 0; i < LIN; i++){
		printf("|");
		for(int j = 0; j < COL; j++){
			printf(" %2d ", matriz[i][j]);
			
		}
		printf(" |\n");
	}
}

int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	srand(time(NULL));
	int matriz[LIN][COL], maior, linha, coluna;
	
	preencher(matriz);
	maior_elemento(matriz, &maior, &linha, &coluna);
	printf("\n========== RELATÓRIO ==========\n");
	exibir(matriz);
	printf("\nMaior elemento: %d\n", maior);
	printf("Índice: [%d][%d]\n", linha, coluna);
	printf("===============================\n");
	
	
	return 0;
}
