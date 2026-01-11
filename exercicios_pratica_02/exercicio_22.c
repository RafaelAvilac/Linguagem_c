/*Exercício 15 — Matriz 3x3
Enunciado

Crie uma matriz 3x3 e:
Preencha a matriz (usuário ou rand)
Imprima a matriz formatada
Calcule:
soma total dos elementos
soma de cada linha*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define LIN 3
#define COL 3

int main(void){
setlocale(LC_ALL, "");
srand(time(NULL));

int numeros[LIN][COL], soma_linha = 0, soma_total = 0;

for(int i = 0; i < LIN; i++){
	for(int j = 0; j < COL; j++){
		numeros[i][j] = rand() % 100 + 1;
	}
}
printf("Matriz formatada:\n\n");
for(int i = 0; i < LIN; i++){
	printf("| ");
	for(int j = 0; j < COL; j++){
		printf("%3d ", numeros[i][j]);
	}
	printf(" |\n");
}

for(int i = 0; i < LIN; i++){
	
	 soma_linha = 0;
	for(int j = 0; j < COL; j++){
		soma_linha += numeros[i][j];
		soma_total += numeros[i][j]; 
	}
	printf("\nA soma da %dº linhas é: %3d\n",i +1, soma_linha);
}
	printf("A soma total dos elementos da MAtriz é: %3d\n", soma_total);
























return 0;
}
