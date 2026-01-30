/*Maior e Menor Elemento (Vetor Dinâmico)
Objetivo

Dado um vetor dinâmico de inteiros, encontrar:
o maior valor
o menor valor
os índices (posições) de ambos
Regras obrigatórias
O vetor deve ser alocado no main com malloc
Criar uma função que:
não imprime
retorna os resultados via parâmetros por ponteiro
Inicializar maior e menor com vetor[0]
Usar for
Liberar a memória com free*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void dimensionar_vetor(int *tamanho){
	
	printf("Qual o tamanho do vetor: ");
	scanf("%d", tamanho);
	
	while(*tamanho < 1){
		printf("Digite um tamanho valido: ");
		scanf("%d", tamanho);
	}
}
void preencher_vetor(int *vetor, int tamanho){
	printf("\n\n");
	for(int i = 0; i < tamanho; i++){
		printf("Informe o %dº número: ", i + 1); 
		scanf("%d", &vetor[i]);
	}
}
void verificar_maior_menor(int *vetor, int tamanho, int *maior, int *menor, int *indice_maior, int *indice_menor){
	
	*maior = vetor[0];
	*menor = vetor[0]; 
	*indice_maior = 0;
    *indice_menor = 0;
	
	for(int i = 0; i < tamanho; i++){
		if(vetor[i] > *maior){
			*maior = vetor[i];
			*indice_maior = i;
		}
		if(vetor[i] < *menor){
			*menor = vetor[i];
			*indice_menor = i;
		}
	}	
}

void exibir_vetor(int *vetor, int tamanho){
	printf("\n\nVetor preenchido.\n");
	for(int i = 0; i < tamanho; i++){
		printf("\t%d", vetor[i]);
	}
	
}
int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int tamanho, maior, menor;
	int indice_maior, indice_menor;
	int *vetor;
	
	dimensionar_vetor(&tamanho);
	
	vetor = (int *) malloc(tamanho * sizeof(int));
	
	if(vetor == NULL){
		printf("ERRO.\n");
		return 1;
	}
	
	preencher_vetor(vetor, tamanho);
	verificar_maior_menor(vetor, tamanho, &maior, &menor, &indice_maior, &indice_menor);
	exibir_vetor(vetor, tamanho);
	printf("\nMaior elemento: %d\nIndice: %d\n\n", maior, indice_maior);
	printf("Menor elemento: %d\nIndice: %d\n", menor, indice_menor);
	
	free(vetor);
	return 0;
}
