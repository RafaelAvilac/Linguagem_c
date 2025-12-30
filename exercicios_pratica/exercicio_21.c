#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define TAM 3
#define MIN 1
#define MAX 10

/*Crie um programa em C que:
Leia uma matriz 3x3 de números inteiros
Leia um número inteiro informado pelo usuário
Verifique se esse número existe na matriz*/

void preencher(int numeros[][TAM]){
	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			numeros[i][j] = MIN + (rand() % (MAX - MIN + 1));
		}
	}
}
void exibir(int numeros[][TAM]){
	printf("\nMatriz Formatada.\n");
	for(int i = 0; i < TAM; i++){
		printf("| ");
		for(int j = 0; j < TAM; j++){
			printf("%2d ", numeros[i][j]);
		}
		printf(" |\n");
	}
}
void buscar(int numeros[][TAM],int numero){
	
	int existe = 0, linha = -1, coluna = -1;
	
	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			if(numeros[i][j] == numero){
				existe = 1;
				linha = i;
				coluna = j;
				i = TAM;
				break;
			}
		}
	}
	if(existe){
		printf("Pelo menos número %d existe na matriz, onde foi encontrado  no índice [%d][%d].", numero, linha, coluna);
	}else{
		printf("O número %d não existe na matriz", numero);
	}		
}
int main(){
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	int numeros[TAM][TAM], numero;
	
	preencher(numeros);
	exibir(numeros);
	
	printf("\n\nInforme o nº para busca: ");
	scanf("%d", &numero);
	buscar(numeros, numero);
	
	return 0;
}
