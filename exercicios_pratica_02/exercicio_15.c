/*Exercício 8 — Soma e Média do Vetor

Enunciado
Utilizando um vetor de 10 posições:

Leia os valores

Calcule a soma de todos os elementos

Calcule a média*/
#include <stdio.h>
#include <locale.h>
#define TAM 10

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int numeros[10], soma = 0;
	
	for(int i = 0; i < TAM; i++){
		printf("Informe o %dº valor: ", i + 1);
		scanf("%d", &numeros[i]);
	}
	for(int i = 0; i < TAM; i++){
		soma += numeros[i];
		
	}
	printf("Total soma: %d\n\n", soma);
	
	float media = (float) soma / TAM;
	
	printf("Média: %.2f\n", media);
	
	
	return 0;
}
