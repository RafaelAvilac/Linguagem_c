#include<stdio.h>
/*10 – Classificação do nível da partida com base na quantidade de torcedores
Escreva um programa que solicita ao usuário:
A capacidade total do estádio.
A quantidade de torcedores presentes no jogo.
Com base na taxa de ocupação do estádio, o programa deve classificar a partida da seguinte forma:
*Se o estádio estiver com mais de 90% da capacidade ocupada: "Lotado!"
*Se estiver entre 70% e 90% (inclusive): "Ótima presença de público!"
*Se estiver entre 50% e 70% (inclusive): "Público razoável."
*Se estiver abaixo de 50%: "Morumbis"*/

int main(){
	
	int capacidade, quantidade;
	float percentual;
	
	printf("Quantos torcedores cabem no estadio: ");
	scanf("%d", &capacidade);
	
	printf("Quantos torcedores estao no estadio: ");
	scanf("%d", &quantidade);
	percentual = (float)quantidade / capacidade * 100;
	
	if (quantidade <= 0){
		
		printf("Informe uma quantidade valida");
		
		} else if ( quantidade > capacidade){
		
			printf("Erro capacidade nao permitida.");

		} else if (percentual > 90) {
			printf("Percentual: %.2f%%\n", percentual);
			printf("\nLotado");
		
		} else if (percentual >= 70) {
			printf("Percentual: %.2f%%", percentual);
			printf("\nOtima presença de publico!");
		} else if (percentual >= 50) {
			printf("Percentual: %.2f%%", percentual);
			printf("\nPublico razoavel.");
		} else {
			printf("Percentual: %.2f%%", percentual);
			printf("\nMorumbis");
		
	}	
	
	return 0;
}
