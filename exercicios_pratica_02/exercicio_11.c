/*Exercício 4 — Validação de Intervalo

Enunciado
Peça ao usuário um número de 1 a 10.
Enquanto o valor for inválido, solicite novamente.
Ao final, mostre o número válido digitado.*/


#include <stdio.h>

int main(void){
	
	int n;
	
	printf("Informe um numero de 1 a 10: ");
	scanf("%d", &n);
	
	while(n < 1 || n > 10){
		printf("Numero invalido\nDigite novamente: ");
		scanf("%d", &n);
	}
	printf("\nNumero %d validado.\n", n);
	
	return 0; 
}
