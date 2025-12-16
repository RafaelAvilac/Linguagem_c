#include <stdio.h>


/*Exercício 1

Um jogador precisa coletar moedas em um jogo. A cada rodada, ele coleta uma quantidade entre 1 e 10 moedas.
O jogo só termina quando o jogador acumula pelo menos 100 moedas.
Escreva um programa em C que solicite ao usuário, repetidamente, 
a quantidade de moedas coletadas por rodada, até que o total acumulado atinja ou ultrapasse 100 moedas.
Ao final, exiba quantas rodadas foram necessárias para atingir a meta.*/


int main(){
	
	int moedas = 0, cont = 0, total = 0 ;
	
	
	do {
		
		printf("Quantas moedas ganhou nesta rodada: ");
		scanf("%d", &moedas);
		
		while(moedas <= 0){
			printf("Informacao invalida.\n");
			printf("Quantas moedas ganhou nesta rodada: ");
			scanf("%d", &moedas);
		}
		
		
		total += moedas;
		cont++;
		
	}while(total < 100);
	
	printf("Foram necessarias %d rodadas para coletar %d moedas.", cont, total);
	
	return 0;
}
