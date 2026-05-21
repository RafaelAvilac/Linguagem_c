/*10: Você decidiu ficar rico guardando dinheiro por 30 dias consecutivos. Para tal, decidiu
guardar 1 centavo no primeiro dia, 2 centavos no segundo dia, 4 centavos no terceiro dia, 8 centavos
no quarto dia, e assim por diante. Faça um programa para calcular quanto você terá ao final dos 30
dias*/

#include <stdio.h>

int main(){
	
	float reserva = 1, total = 0;
	
	for(int i = 1; i <= 30; i++){
		total += reserva;
		reserva *=2;
	} 
	
	printf("Reserva:R$ %.2f\n", total/100.00);
	
	return 0;
}
