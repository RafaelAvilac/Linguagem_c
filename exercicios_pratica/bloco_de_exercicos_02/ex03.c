/*Exercício 3 — Tabuada

Objetivo:
Ler um número inteiro e imprimir sua tabuada de 1 a 10.

Conceitos reforçados:
for, entrada/saída (stdio.h), operadores aritméticos*/
#include <stdio.h>
#define TAM 10

int main(void){
	
	int numero;
	
	printf("Informe um numero para saber sua tabuada de 1 a 10: ");
	scanf("%d", &numero);
	
	for(int i = 1; i <= TAM; i++){
		printf("\t%3d x %3d = %3d\n", numero, i, numero * i);
	}
	
	return 0;
}
