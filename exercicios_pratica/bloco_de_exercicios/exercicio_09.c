/*A Matriz 3x3 (Soma da Diagonal)

Objetivo: Introdução a vetores multidimensionais (Matrizes).

Enunciado: Crie uma matriz de inteiros 3x3 (int mat[3][3]). Preencha-a com números digitados pelo usuário. Ao final:

Mostre a matriz formatada como uma tabela (linhas e colunas).

Calcule e mostre a soma dos números da Diagonal Principal (onde a linha é igual à coluna).*/

#include <stdio.h>
#include <locale.h>

#define LIN 3
#define COL 3

void preencher(int matriz[][COL]){
	for(int i = 0; i <LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("Informe um valor para a posição [%d][%d]: ", i,j);
			scanf("%d", &matriz[i][j]);
		}
	}
}
void exibir(int matriz[][COL]){
	printf("\n\nMatriz formatada.\n");
	
	for(int i = 0; i <LIN; i++){
		printf("| ");
		for(int j = 0; j < COL; j++){
			printf("%3d ", matriz[i][j]);	
		}
		printf("|\n");
	}	
}
int somar_diagonal(int matriz[][COL]){
	int soma = 0;
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			if(i == j){
				soma += matriz[i][j];
			}
		}
	}
	return soma;
}
int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int matriz[LIN][COL];
	
	preencher(matriz);
	exibir(matriz);
	int resultado = somar_diagonal(matriz);
	printf("\n\nResultado soma diagonal: %d", resultado);
	
	
	
	return 0;
} 

