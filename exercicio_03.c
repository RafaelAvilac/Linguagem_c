#include <stdio.h>

/*3 - Conversão de Minutos para Tempo de Jogo
Peça ao usuário para digitar o tempo jogado em minutos. Depois, converta esse valor para horas e minutos e exiba o resultado.*/

int main(){
	
	int minutos;
	float horas;
	
	printf("Informe quantos minutos jogou: ");
	scanf("%d", &minutos);
	
	horas = (float)minutos / 60;
	
	printf("Jogou %.2f", horas);
		
	return 0;
}
