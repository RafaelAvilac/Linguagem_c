/*Próximo exercício (nível seguinte)
Exercício 7 — Vetor Simples

Enunciado
Crie um vetor de 10 posições, permita que o usuário:

Preencha o vetor

Imprima todos os valores armazenados*/

#include <stdio.h>
#include <locale.h>


#define TAM 10
int main(void){
	setlocale(LC_ALL, "Portuguese");

	
	int numeros[10];
	
	for(int i = 0; i < TAM; i++){
		printf("Informe o %d nº: ", i + 1);
		scanf("%d", &numeros[i]); 
	}
	printf("\n\nNúmeros inceridos:\n");
	for(int i = 0; i < TAM; i++){
		printf("%3d\t", numeros[i]);
	}
	
	return 0;
}
