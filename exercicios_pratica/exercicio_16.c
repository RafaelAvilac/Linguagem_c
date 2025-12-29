#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#define TAM 3

void preencher_numeros(float numeros[][TAM]){
	
	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			numeros[i][j] = rand() % 100 + 1;	
		}
	}	
}
void exibir_numeros(float numeros[][TAM]){
	printf("    Matriz formatada.");
	printf("\n ======================\n");
	for(int i = 0; i < TAM; i++){
		printf("| ");
		for(int j = 0; j < TAM; j++){
			printf("%6.2f ", numeros[i][j]);
		}
		printf("|\n");
	}
		printf(" ======================\n\n");
}
void calcular_media(float numeros[][TAM]){

	for(int j = 0; j < TAM; j++){
		float soma = 0;
		printf("Coluna %d: ", j +1);
		for(int i = 0; i < TAM; i++){
			soma += numeros[i][j];
		}
		float media = soma / TAM;
		printf("média = %.2f\n", media);
	}
}
int main(){
	setlocale(LC_ALL, "");
	srand(time(NULL));

	
	
	float numeros[TAM][TAM];
	preencher_numeros(numeros);
	exibir_numeros(numeros);
	calcular_media(numeros);
	
	return 0;
}
