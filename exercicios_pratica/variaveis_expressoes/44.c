/*44. Receba a altura do degrau de uma escada e a altura que o usuario deseja alcancar
subindo a escada. Calcule e mostre quantos degraus o usuario devera subir para atingir 
seu objetivo.*/

#include <stdio.h>

int main(void){
	
	double alt_degrau, alt_desejada;
	int qtd_degraus;
	
	printf("Altura do degrau de uma escada:");
	scanf("%lf", &alt_degrau);
	
	printf("Altura que deseja alcancar subindo a escada: ");
	scanf("%lf", &alt_desejada);
	
	qtd_degraus = (int) (alt_desejada / alt_degrau);
	
	printf("Degraus o usuario devera subir: %d\n", qtd_degraus);
	
	return 0;
}
