 /*Exercício 6 — Resumo
Ler o tamanho de um vetor
Alocar o vetor dinamicamente
Preencher o vetor com valores
Ler um número para busca
Criar uma função que:
Receba o vetor, o tamanho e o número
Conte quantas vezes o número aparece
Retorne apenas a quantidade
No main:
Mostrar o vetor
Mostrar o total encontrado
Liberar memória com free
Sem realloc.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void preencher(int *numeros, int tamanho_vet){
	printf("\n");
	for(int i = 0; i < tamanho_vet; i++){
		printf("Informe o %d nº do vetor: ", i + 1);
		scanf("%d", &numeros[i]);	
	}
	printf("\n");	
}

int buca_numero(int *numeros, int tamanho_vet, int *numero_busca){
	
	int cont = 0;
	for(int i = 0; i < tamanho_vet; i++){
		if(numeros[i] == *numero_busca){
			cont++;
		}
	}
	return cont;
}

void verificar_cont(int *cont_numero,int *numero_busca){
	if(*cont_numero > 0){
		printf("O nº %d aparece %d vezes", *numero_busca, *cont_numero);
	}else {
		printf("O nº %d não aparece.", *numero_busca);
	}
	
}

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int *numeros, tamanho_vet, numero_busca;
	int cont_numero;
	
	printf("Informe o tamanho do vetor: ");
	scanf("%d", &tamanho_vet);
	
	numeros = calloc(tamanho_vet, sizeof(*numeros));
	
	if(numeros == NULL){	
		printf("ERRO na alocação de memoria.");
		return 1;
	}
	
	preencher(numeros, tamanho_vet);
	
	printf("Informe o nº para busca: ");
	scanf("%d", &numero_busca);
	
    cont_numero = buca_numero(numeros, tamanho_vet, &numero_busca);
    
    verificar_cont(&cont_numero, &numero_busca);
	
	free(numeros);
	return 0;
}
