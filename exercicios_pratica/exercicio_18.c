#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define TAM 4
#define MIN 1
#define MAX 100

/*Crie um programa em C que:
Leia uma matriz 4x4 de números inteiros
Calcule a soma da diagonal principal da matriz
Exiba o valor da soma ao final*/


void preencher(int numeros[][TAM]){
	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			numeros[i][j] = MIN + (rand() % (MAX - MIN + 1));
		}
	}
}
void exibir(int numeros[][TAM]){
			printf("  Matriz Formatada.\n");
		for(int i = 0; i < TAM; i++){
			printf("| ");
			for(int j = 0; j < TAM; j++){
			printf("%3d ", numeros[i][j]) ;
			}
		printf(" |\n");
		}
}
int calcular_diagonal(int numeros[][TAM]){
	
	int total = 0;
	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			if(i == j){
				total += numeros[i][j];
			}
		}
	}
	return total;
}
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	int numeros[TAM][TAM], total_diagonal;
	preencher(numeros);
	exibir(numeros);
	total_diagonal = calcular_diagonal(numeros);
	
	printf("\n\nSoma da diagonal principal: %d", total_diagonal);
	
	
	
	
	
	return 0;
}
