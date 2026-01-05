/*Exercício 2: Vetor Dinâmico com Média
Aloque dinamicamente um vetor de n floats (digitado pelo usuário),
preencha-o com valores e calcule a média.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void preencher_vetor(float *numeros, int n){
	
	for(int i = 0; i < n; i++){
		printf("Informe o %dº valor: ", i + 1);
		scanf("%f", &numeros[i]);
	}
}

void exibir(float *numeros, int n){
	
		for(int i = 0; i < n; i++){
		printf("%.2f\t", numeros[i]);
	
	}
}
float media(float *numeros, int n){

	float somar = 0.0;
	
	for( int i = 0; i < n; i++){
		somar += numeros[i]; 
	}
	float media = somar / n;
	
	return media;	
}

int main(void){
	setlocale(LC_ALL, "Portuguese");
		
	int n; 
	float *numeros;
	
	printf("Informe o tamanho do vetor: ");
	scanf("%d", &n);
	
	numeros = (float *) calloc(n, sizeof(float));
	
	preencher_vetor(numeros, n);
	exibir(numeros,  n);
	
	printf("\n\nMédia: %.2f", media(numeros, n));
	
	free(numeros);
	
	return 0;
}
