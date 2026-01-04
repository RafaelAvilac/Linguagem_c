#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int tamanho;
	int *vetor;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tamanho);
	
	vetor = (int *) calloc(tamanho,  sizeof(int));
	
	if(vetor == NULL){
		printf("Erro.\n");
		return 1;
	}
	
	for(int i = 1; i <= tamanho; i++){
		vetor[i] = i * 5;
	}
	for(int i = 1; i <= tamanho; i++){
		printf("%d\n", vetor[i]);
	}
	free(vetor);
	
	return 0;
}
