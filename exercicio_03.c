#include <stdio.h>

/*3 - Conversão de Minutos para Tempo de Jogo
Peça ao usuário para digitar o tempo jogado em minutos. Depois, converta esse valor para horas e minutos e exiba o resultado.*/

int main(){
	
	int minutos, horas, min_restantes;
	
	printf("Informe quantos minutos jogou: ");
	scanf("%d", &minutos);
	
	horas = minutos / 60;
	min_restantes = minutos % 60;
	
	printf("Jogou %d horas e %d minutos ", horas, min_restantes);
		
	return 0;
}
