/*Exercício 4 — Resumo do Enunciado

Ler do usuário o tamanho de um vetor de inteiros
Alocar o vetor dinamicamente (malloc ou calloc)
Preencher o vetor com valores digitados

Criar uma função que receba:
o ponteiro do vetor
o tamanho do vetor
dois ponteiros para contar pares e ímpares

Na função:
percorrer o vetor usando ponteiros
contar quantos números são pares e ímpares
transformar números negativos em positivos diretamente no vetor

No main:
mostrar o vetor antes e depois da função
mostrar a quantidade de pares e ímpares
Liberar a memória no final (free)*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void preencher_numeros(int *numeros, int *tam){
	
	for(int i = 0; i < *tam; i++){
		printf("Digite o %dº valor: ", i + 1);
	    scanf("%d", &numeros[i]);	
	}
	printf("\n=== ANTES da transformação ===\n");
    for(int i = 0; i < *tam; i++){
        printf("%d ", numeros[i]);
    }
    printf("\n");
}

void verificar_paridade(int *numeros, int tam,int *cont_par,int *cont_impar ){
	
	
	for(int i = 0; i < tam; i++){
        
        
        if(numeros[i] < 0){
            numeros[i] = numeros[i] * -1;
        }
    }
	
	for(int i = 0; i < tam; i++){
		if(numeros[i] % 2 == 0){
			(*cont_par)++;
		}else{
			(*cont_impar)++;
		}	
	}
		
}
int main(void){
	setlocale(LC_ALL, "Portuguese");

	
	int tam, *numeros, cont_par = 0, cont_impar = 0;
	printf("Informe tamanho do vetor: ");
	scanf("%d", &tam);
		while(tam < 1){
			printf("Informe tamanho do vetor: ");
			scanf("%d", &tam);
		}
	
	numeros = calloc(tam, sizeof(*numeros));
	 if(numeros == NULL){
        printf("Erro ao alocar memória!\n");
        return 1;
    }
	
	preencher_numeros(numeros, &tam);
	verificar_paridade(numeros, tam, &cont_par, &cont_impar);

	printf("\n=== DEPOIS da transformação ===\n");
    for(int i = 0; i < tam; i++){
        printf("%d ", numeros[i]);
    }
    printf("\n");
	
	
	printf("Existem %d nº pares.\nExistem %d nº impares.\n", cont_par, cont_impar);
	
	free(numeros);
	return 0;
}
