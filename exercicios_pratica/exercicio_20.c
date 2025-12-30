#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define LIN 3
#define COL 2
#define MIN 1
#define MAX 20

/*Crie um programa em C que:
Leia uma matriz 3x2 de números inteiros
Exiba a matriz original formatada
Exiba a matriz transposta (2x3) formatada*/

void preencher(int numeros[LIN][COL]){
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			numeros[i][j] = MIN+(rand()%(MAX - MIN + 1));
		}
	}
}
void exibir(int numeros[LIN][COL]){
	printf("\nMatriz Formatada.\n");
	for(int i = 0; i < LIN; i++){
		printf("| ");
		for(int j = 0; j < COL; j++){
			printf("%3d ",numeros[i][j]);
		}
		printf(" |\n");
	}
}

void exibir_transposta(int numeros[LIN][COL]){
	printf("\nMatriz Transposta.\n");
	for(int i = 0; i < COL; i++){
		printf("| ");
		for(int j = 0; j < LIN; j++){
			printf("%3d ",numeros[j][i]);
		}
		printf(" |\n");
	}
}
int main(){
	
	setlocale(LC_ALL, "Poertuguese");
	srand(time(NULL));
	
	int numeros[LIN][COL];
	
	preencher(numeros);
	exibir(numeros);
	exibir_transposta(numeros);
	
	
	return 0;
}
