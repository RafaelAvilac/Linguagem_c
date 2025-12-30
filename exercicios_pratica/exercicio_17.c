#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define TAM 4
#define MIN 1
#define MAX 100

void preencher_numeros(int numeros[][TAM]){
	
	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			numeros[i][j] = MIN + (rand() % (MAX - MIN + 1));
		}
	}
}
void exibir_numeros(int numeros[][TAM]){
	
	printf("Matriz formatada.\n");
	for(int i = 0; i < TAM; i++){
		printf("| ");
		for(int j = 0; j < TAM; j++){
			printf(" %3d ", numeros[i][j]);
		}
		printf(" |\n");
	}
}
void comparar_valor(int numeros[][TAM]){
	int maior = numeros[0][0], lin_maior = 0, col_maior = 0;
	int menor = numeros[0][0], lin_menor = 0, col_menor= 0;
	
	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			if(numeros[i][j] > maior ){
				maior = numeros[i][j];
				lin_maior = i;
				col_maior = j;	
			}
			
		    if(numeros[i][j] < menor){
				menor = numeros[i][j];
				lin_menor = i;
				col_menor = j;		
			}
		}
	}
	printf("\nMaior valor: %d na posição [%d][%d].\n", maior, lin_maior, col_maior);
	printf("Menor valor: %d na posição [%d][%d].\n", menor, lin_menor, col_menor);
}
int main(){
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
int numeros[TAM][TAM];
	preencher_numeros(numeros);
	exibir_numeros(numeros);
	comparar_valor(numeros);
	
	
	return 0;
}
