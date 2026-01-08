/*Exercício 7 — Resumo
Ler o tamanho de um vetor
Alocar o vetor dinamicamente
Preencher o vetor com valores
Criar uma função que:
Receba o vetor e o tamanho
Transforme valores negativos em positivos
Substitua valores maiores que 100 por 0
Não imprima nada, apenas altere o vetor
No main:
Mostrar o vetor antes
Chamar a função
Mostrar o vetor depois
Liberar memória com free*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
void preencher(int *numeros, int tamanho){
	for(int i = 0; i < tamanho; i++){
		numeros[i] = rand() % 201 - 50;
	}
}
void vetor_original(int *numeros, int tamanho){
	printf("\n\n");
	printf("Vetor Original\n");
	for(int i = 0; i < tamanho; i++){
		printf("%3d\t", numeros[i]);
	}
}
void modificar(int *numeros, int tamanho){
	for(int i = 0; i < tamanho; i++){
		if(numeros[i] < 0){
			numeros[i] = numeros[i] * (-1);
		}
		if(numeros[i] > 100){
			numeros[i] = 0;
		}
	}
}
void vetor_modificado(int *numeros, int tamanho){
		printf("\n\n");
		printf("Vetor modificado\n");
	for(int i = 0; i < tamanho; i++){
		printf("%3d\t", numeros[i]);	
	}	
}

int main(void){
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	int *numeros, tamanho;
	
	printf("Informe o tamanho do vetor: ");
	scanf("%d", &tamanho);
	
	numeros = calloc(tamanho, sizeof(*numeros));
	if(numeros == NULL){
		printf("ERRO de alocação de memória.\n");
	}
	preencher(numeros, tamanho);
	
	vetor_original(numeros, tamanho);
	
	modificar(numeros, tamanho);
	vetor_modificado(numeros, tamanho);
	
	return 0;
}
