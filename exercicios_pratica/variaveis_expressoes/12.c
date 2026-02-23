/*12. Leia uma distancia em milhas e apresente-a convertida em quil ˆ ometros. A f ˆ ormula de ´
conversao ˜ e: ´ K = 1; 61 * M, sendo K a distancia em quil ˆ ometros e ˆ M em milhas..*/

#include <stdio.h>
#define FATOR_CONVERSAO 1.61


int main(void){
	
	double km, milhas;
	
	printf("Informe a distancia em milhas: ");
	scanf("%lf", &milhas);
	
     km = FATOR_CONVERSAO * milhas;
	
	printf("A distancia  de %.2lf milhas equivale a %.2lf KM.\n",milhas, km);
	
	return 0;
}
