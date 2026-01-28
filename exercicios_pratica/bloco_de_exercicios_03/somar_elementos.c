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
int calcular_elementos(int matriz[][COL]){
	int soma = 0;
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			soma += matriz[i][j];
		}
	}
	return soma;
}
int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int matriz[LIN][COL], resultado;
	
	preencher(matriz);
	exibir(matriz);
    resultado =	calcular_elementos(matriz);
	printf("Resultado da soma detodos os elementos: %d", resultado);
	return 0;
}

