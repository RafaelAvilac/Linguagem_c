/*Exercício 1
Leia um número inteiro e informe:
se é positivo, negativo ou zero
Use ponteiro apenas para leitura (scanf).*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void ler_numeros(int *numero){
		printf("Informe o número: ");
		scanf("%d", numero);
}

int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int numero;
	
	ler_numeros(&numero);
	

		if(numero > 0){
			printf("Número %d é positívo.\n", numero);
		}else if(numero == 0){
			printf("Número é ZERO.\n");
		}else{
			printf("Número %d é negativo.\n", numero);
		}

	
	return 0;
}
