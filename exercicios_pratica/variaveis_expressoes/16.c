/*16. Leia um valor de comprimento em polegadas e apresente-o convertido em cent´imetros.
A formula de convers ´ ao ˜ e: ´ C = P * 2; 54, sendo C o comprimento em cent´imetros e P o
comprimento em polegadas. */

#include <stdio.h>
#define FATOR_CONVERSAO 2.54

int main(void){
	
	double pol, cent;
	
	printf("Informe o comprimento em polegadas: ");
	scanf("%lf", &pol);
	
	 cent = pol * FATOR_CONVERSAO;
	
	printf("Centimetros: %.2lf\n", cent);
	
	return 0;
}
