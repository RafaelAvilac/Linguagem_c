/*8. Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A
formula de convers ´ ao˜ e:´ C = K - 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin.*/

#include <stdio.h>
#include <locale.h>
#define ZERO_ABSOLUTO 273.15
int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	double c, k;
	
	printf("Temperatua em °K: ");
	scanf("%lf", &k);
	
	c = k - ZERO_ABSOLUTO;
	
	printf("Temperatura em °C: %.2lf\n", c);
	
	
	return 0;
}

