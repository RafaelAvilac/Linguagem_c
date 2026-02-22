/*11. Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
(quilometros por hora). A f ˆ ormula de convers ´ ao ˜ e: ´ K = M * 3:6, sendo K a velocidade
em km/h e M em m/s.*/

#include <stdio.h>
#define FATOR_CONVERSAO 3.6


int main(void){
	
	double km_h, metros_s;
	
	printf("Informe a velocidade em metros por segundo: ");
	scanf("%lf", &metros_s);
	
     km_h = metros_s * FATOR_CONVERSAO;
	
	printf("A velocidade de %lf metros por segundo equivale a %.2lf KM/H.\n",metros_s, km_h);
	
	return 0;
}
