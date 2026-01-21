/*NÍVEL FÁCIL — Fundamentos Sólidos
1. Classificação de Número

Descrição:
Leia um número inteiro e informe se ele é positivo, negativo ou zero.

Conceitos reforçados:
if / else, entrada e saída (stdio.h)*/

#include <stdio.h>

int main(void){
	
	int numero;
	
	printf("Informe um numero: ");
	scanf("%d", &numero);
	printf("Tipo de numero:\n\n");
	if(numero == 0){
		printf("\tNumero é Zero.\n");
	}else if(numero < 0){
		printf("\tNumero negativo.\n");
		
	}else {
		printf("\tNumero positivo.");
	}
	
	return 0;
}
