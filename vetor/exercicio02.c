#include <stdio.h>



void preencher(int vetor[]){
	
	for(int i = 0; i < 4; i++){
		printf("Ataque %d: ", i + 1);
		scanf("%d", &vetor[i]);
	}	
}

int maior_dano(int vetor[]){
	
	int	maior = vetor[0];
	
	for(int i = 0; i < 4; i++){
		if(vetor[i] > maior){
			maior = vetor[i];
		}
	}
	
	return maior;
}
int main(){
	
	int vetor[4];
	
	printf("Digite o dano de 4 ataques\n\n");
	preencher(vetor);
	printf("\n\nMaior dano causado: %d", maior_dano(vetor));
	
	
	return 0;
}
