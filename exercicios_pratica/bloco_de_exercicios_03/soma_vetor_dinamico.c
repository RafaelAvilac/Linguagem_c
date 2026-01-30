/*Criar um vetor dinâmico de N inteiros e calcular a soma total dos elementos.

Regras

Vetor alocado no main
Função:
int soma_elementos(int *vetor, int n);

A função não imprime
O main imprime o resultado
Usar malloc e free*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void validar_qtd(int *qtd){
	while(*qtd < 1){
		printf("Digite um valor válido (maior que 0): ");
		scanf("%d", qtd);
	}
}

void preencher_vetor(int *numeros, int qtd){
	
	for(int i = 0; i < qtd; i++){
		printf("Informe o %dº número para o índice [%d]: ", i + 1, i );
		scanf("%d", &numeros[i]);
	}
}
int somar_elementos(int *numeros, int qtd){
	int soma = 0;
	for(int i = 0; i < qtd; i++){
		soma += numeros[i];
	}
	return soma;
}
void exibir(int *numeros, int qtd){
	printf("\nVetor:\n");
	for(int i = 0; i < qtd; i++){
		printf("%4d", numeros[i] );
	}
	printf("\n");
}
int main(void){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int qtd, resultado;
	int *numeros;
	
	printf("Quantos números terá o vetor: ");
	scanf("%d", &qtd);
	
	validar_qtd(&qtd);
	
	numeros = (int*) malloc(qtd * sizeof(int));
	
	if(numeros == NULL){
		printf("Erro");
		return 1;
	}
	
	preencher_vetor(numeros, qtd);
	resultado = somar_elementos(numeros, qtd);
	exibir(numeros, qtd);
	printf("\nResultado da soma dos elementos: %4d\n", resultado);
	
	
	
	free(numeros);
	return 0;
}
