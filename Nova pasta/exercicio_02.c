#include <stdio.h>

/*2 - Média de Gols por Partida
Escreva um programa que receba o número total de gols de um jogador e a quantidade de partidas jogadas. Depois, calcule e exiba a média de gols por partida.*/

int main(){
	
	int partidas, gols;
	float media;
	printf("Informe quantas partidas jogou: ");
	scanf("%d", &partidas);
	
	printf("Informe quantos gols marcou: ");
	scanf("%d", &gols);
		media = (float)gols / partidas;
	printf("\nMedia de gols por jogo: %.2f", media);
	
	
	return 0;
}
