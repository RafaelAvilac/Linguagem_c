/*17. Leia um valor de comprimento em cent´imetros e apresente-o convertido em polegadas.
A formula de conversao e: P = C / 2.54 sendo C o comprimento em centimetros e P o
comprimento em polegadas.*/
#include<stdio.h>
#define FATOR_CONVERSAO 2.54

int main(void){
	
	double cent, pol;
	
	printf("Digite um valor de comprimento em centimetros: ");
	scanf("%lf", &cent);
	
	pol = cent/FATOR_CONVERSAO;
	
	printf("Conversão p/ polegadas: %lf\n", pol);
	
	
	return 0;
}
