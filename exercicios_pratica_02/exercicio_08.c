/*Exercício 1 — Contagem Simples
Enunciado
Solicite ao usuário um número inteiro positivo e imprima todos os números de 1 até esse número.
Regras (importantes para o treino)
Use scanf para entrada
Use estrutura de repetição (for ou while)
Não use vetor
Considere apenas números positivos*/
#include <stdio.h>

int main(void){
	
	int numero;
	
	printf("Informe um numero inteiro-positivo: ");
	scanf("%d", &numero);
	
	// ferificar se numero é positivo
	while(numero <= 0){
		printf("Numero invalido\nDigite novamente: ");
		scanf("%d", &numero);
	}
	// fazer a contagem de um até numero informado
	for(int i = 1; i <= numero; i++){
	
		printf("%d\t", i);
   
    }
	
	return 0;
}
