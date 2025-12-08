#include <stdio.h>

/*4 - Calculando o Aproveitamento de um Time
Crie um programa que peça o número de vitórias, empates e derrotas de um time. Depois, calcule o número total de pontos, seguindo a regra:
Vitória = 3 pontos
Empate = 1 ponto
Derrota = 0 pontos*/

int main(){
	
	int vitorias, empates, derrotas, total;
	
	printf("Informe numero de vitorias: ");
	scanf("%d", &vitorias);
	printf("Informe numero de empates: ");
	scanf("%d", &empates);
	printf("Informe numero de derrotas: ");
	scanf("%d", &derrotas);
	
	total = (vitorias * 3) + (empates * 1) + 0;
	
	printf("O total de pontos obtidos e: %d",total);
	
	
	
	
	
	return 0;
}
