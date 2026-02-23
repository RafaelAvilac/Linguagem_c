/*13. Leia uma distancia em quil ˆ ometros e apresente-a convertida em milhas. A f ˆ ormula de ´
conversao ˜ e: ´ M = K
1;61, sendo K a distancia em quil ˆ ometros e ˆ M em milhas.
*/

#include <stdio.h>
#define FATOR_CONVERSAO 1.61


int main(void){
	
	double km, milhas;
	
	printf("Informe a distancia em Km: ");
	scanf("%lf", &km);
	
    milhas = km / FATOR_CONVERSAO;
	
	printf("A distancia de %.2lf Km equivale a %.2lf milhas.\n", km, milhas);
	
	return 0;
}
