#include <stdio.h>
#include <locale.h>

/*Crie um programa que:

Leia uma matriz 3x3 de números inteiros
Exiba a matriz formatada na tela*/

void preencher_numeros(int numeros[][3]){
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("Informe um nº para o indice [%d][%d]: ", i, j);
			scanf("%d", &numeros[i][j]);
		}
	}
}
void exibir_numeros(int numeros[][3]){
	printf("\n\nMatriz formatada.\n");
	for(int i = 0; i < 3; i++){
		printf("|");
		for(int j = 0; j < 3; j++){
			printf("%3d ", numeros[i][j]);	
		}
	printf("|\n");
	}
}

int main(){
	setlocale(LC_ALL, "");
	int numeros[3][3];
	
	preencher_numeros(numeros);
	exibir_numeros(numeros);
	return 0; 
}
