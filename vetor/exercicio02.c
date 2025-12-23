#include <stdio.h>

/*2 - Encontrando o Maior Dano Causado
Crie um programa que leia o dano causado em 4 ataques e exiba qual foi o ataque mais forte. 
Digite o dano de 4 ataques:
 
Ataque 1: 10
Ataque 2: 33
Ataque 3: 99
Ataque 4: 78
 
Maior dano causado: 99*/

void preencher(int vetor[]){
	
	for(int i = 0; i < 4; i++){
		printf("Ataque %d: ", i + 1);
		scanf("%d", &vetor[i]);
	}	
}

int maior_dano(int vetor[]){
	
	int	maior = vetor[0];
	
	for(int i = 1; i < 4; i++){
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
