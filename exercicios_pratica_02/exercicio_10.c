/*Exercício 3 — Maior de Dois Números

Enunciado
Leia dois números inteiros e informe:
qual é o maior, ou
se eles são iguais*/

#include <stdio.h>

int main(void){
	
	int primeiro, segundo;
		
		printf("Informe o primeiro numero: ");
		scanf("%d", &primeiro);
		
		printf("Informe o segundo numero: ");
		scanf("%d", &segundo);
		
		if(primeiro == segundo){
			
			printf("Primeiro numero %d e segundo %d, sao iguais", primeiro, segundo);
		
	
			
		}else if (primeiro < segundo){
			
				printf("Primeiro numero %d e menor que o segundo %d, ", primeiro, segundo);
				
		}else {
			
			printf("Primeiro numero %d e maior que o segundo %d, ", primeiro, segundo);
		}
	
	return 0;
}
