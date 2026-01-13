/*Exercício 14 — Estatísticas em Funções
Enunciado

Usando um vetor de 10 posições, crie funções separadas para:
Calcular a soma
Calcular a média
Encontrar o maior valor
Encontrar o menor valor

O main deve:
preencher o vetor
chamar as funções
mostrar os resultados*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define TAM 10

void calcular_soma(int *numeros, int *soma){
	
	for(int i = 0; i < TAM; i++){
		*soma += numeros[i];
	}
}
void calcular_media(int *numeros, float *media){
	int soma = 0;
	for(int i = 0; i < TAM; i++){
		soma+=numeros[i];
	}
	*media = (float) soma / TAM;
}
void calcular_maior_menor(int *numeros,int *maior, int *menor){
	*maior = numeros[0];
	*menor = numeros[0];
	
	for(int i = 1; i < TAM; i++){
		if(numeros[i] > *maior){
			*maior = numeros[i];
		}
		if(numeros[i] < *menor){
			*menor = numeros[i];
		}
		
	}
}
int main(void){
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	int numeros[TAM], soma = 0, maior, menor;
	float media = 0;
	
	for(int i = 0; i < TAM; i++){
		numeros[i] = rand() %100 + 1;
	}
	printf(" ----------------------------\n");
	printf("|     Vetor preenchido.      |\n");
	printf(" ----------------------------\n");
	
	for(int i = 0; i < TAM; i++){
		printf("%d ", numeros[i]);
	}
	calcular_soma(numeros, &soma);
	printf("\n\nSoma dos elementos do vetor: %d\n", soma);

	calcular_media(numeros, &media);
	printf("\n\nMédia do vetor: %.2f\n", media);

	calcular_maior_menor(numeros, &maior, &menor);
	printf("\n\nMaior nº %d\nMenor nº %d\n", maior, menor);
	
	
	return 0;
}
