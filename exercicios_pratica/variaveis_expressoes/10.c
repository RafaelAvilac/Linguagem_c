/*10. Leia uma velocidade em km/h (quilometros por hora) e apresente-a convertida em m/s ˆ
(metros por segundo). A formula de conversao e: ´ M = K=3:6, sendo K a velocidade em
km/h e M em m/s.c*/

#include <stdio.h>
#define FATOR_CONVERSAO 3.6


int main(void){
	
	double km_h, metros_s;
	
	printf("Informe a velocidade em KM/H: ");
	scanf("%lf", &km_h);
	
	metros_s = km_h / FATOR_CONVERSAO;
	
	printf("A velocidade de %lf KM/H equivale a %.2lf metros por segundo.\n", km_h, metros_s);
	
	return 0;
}
