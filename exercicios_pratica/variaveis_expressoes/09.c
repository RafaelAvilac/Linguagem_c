/*9. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
formula de convers ´ ao˜ e:´ K = C + 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin.*/


#include <stdio.h>
#include <locale.h>
#define ZERO_ABSOLUTO 273.15
int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	double c, k;
	
	printf("Temperatua em °C: ");
	scanf("%lf", &c);
	
	k = c + ZERO_ABSOLUTO;
	
	printf("Temperatura em °K: %.2lf\n", k);
	
	
	return 0;
}
