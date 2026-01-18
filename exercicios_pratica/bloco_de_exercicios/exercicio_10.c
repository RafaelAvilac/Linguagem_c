/*Crie um programa que leia 5 números inteiros desordenados e os armazene em um vetor.
Em seguida, implemente o algoritmo Bubble Sort para ordenar esse vetor em ordem crescente.
Exiba o vetor ordenado no final.

Como funciona o Bubble Sort (Ordenação por Bolha): A ideia é "flutuar" os números maiores para o final.

Percorra o vetor comparando pares de vizinhos: vetor[j] e vetor[j+1].

Se o número da esquerda for maior que o da direita, troque-os de lugar.

Repita esse processo várias vezes até que nenhum número precise ser trocado.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5

void preencher(int *numeros){
	
	for(int i = 0; i < TAM; i++){
		numeros[i] = rand() % 20 + 1;	
	}
}
void vetor_original(int *numeros){
	for(int i = 0; i < TAM; i++){
		printf("%2d\t", numeros[i]);
	}
}
void vetor_ordenado(int *numeros){
	int aux;
	int troca = 1; // Inicializa como verdadeiro para entrar no while
	int fim = TAM - 1; // Variável para controlar o fim da comparação
	
	while(troca){
		troca = 0;
		for(int i = 0; i < fim ; i++){
			if(numeros[i] > numeros[i + 1]){
				aux = numeros[i];
				numeros[i] = numeros[i + 1];
				numeros[i + 1] = aux;
				troca = 1;
			}
		}		
		fim--;
	}	
}
void exibir_vetor_ordenado(int *numeros){
	for(int i = 0; i < TAM; i++){
		printf("%2d\t", numeros[i]);
	}
}

int main(void){
	srand(time(NULL));
	
	int numeros[TAM];
	
	preencher(numeros);
	printf("\n======== Numeros digitados ========\n");
	vetor_original(numeros);
	printf("\n===================================\n");
	vetor_ordenado(numeros);
	printf("\n\n======== Numeros digitados ordenados ========\n");
	exibir_vetor_ordenado(numeros);
	printf("\n=============================================\n");
	
	
	return 0; 
}
