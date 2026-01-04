/* Crie um programa em C que:
- Peça ao usuário o tamanho de um vetor de inteiros.
- Aloque dinamicamente o vetor usando calloc.
- Preencha o vetor com valores digitados pelo usuário.
- Imprima o vetor.

Crie uma função que inverte a ordem dos elementos do
vetor (usando ponteiros).
Imprima o vetor invertido.
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void inverter_numeros(int *numeros, int tam){
	int temp;

	for(int i = 0; i < tam / 2; i++){
		temp = numeros[i];
		numeros[i] = numeros[tam - 1 - i];
		numeros[tam - 1 - i] = temp;
	}

}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int tam; 
	int *numeros;
	
	printf("Informe o tamanho do vetor: ");
	scanf("%d", &tam);
	
	numeros = (int *) malloc(tam * sizeof(int));
	
	if(numeros == NULL){
		printf("Erro");
		return 1;
	}
	 for(int i = 0; i < tam; i++ ){
	 	printf("Informe o %dº número: ", i + 1);
	 	scanf("%d", &numeros[i]);
	 }
	 printf("==== Primeiro vetor ====.\n");
	 for(int i = 0; i < tam; i++ ){
	 	printf("%d\t", numeros[i]);
	 }
	 	printf("\n=========================.\n");
	 	
	 	inverter_numeros(numeros, tam);
	 	
	printf("\n\n==== Vetor invertido ====.\n");
	 for(int i = 0; i < tam; i++ ){
	 	printf("%d\t", numeros[i]);
	 }
	 	printf("\n=========================.\n");
	 	
    	free(numeros);

	return 0;
}
