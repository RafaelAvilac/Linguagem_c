#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*1- Fézinha da mega

Crie um programa em C que simule a geração de 6 números aleatórios entre 1 e 60, como em um jogo de loteria (ex: Mega Sena).
Os números devem ser exibidos na tela.
Não é necessário garantir que os números sejam diferentes entre si neste primeiro momento.*/



void gerar_numero(int vetor[]){
	
	for(int i = 0; i < 6; i++){
		vetor [i] =	rand() % 60 +1;
	}	
}

void imprimir_vetor(int vetor[]){
	
	for(int i = 0; i < 6; i++){
		
		printf("Numero sorteado %d\n", vetor[i]);
	}
	
}

int main(){
	
	srand(time(NULL));
	
	int aleatorio[6];
	
	gerar_numero(aleatorio);
	imprimir_vetor(aleatorio);
	
	return 0;
}
