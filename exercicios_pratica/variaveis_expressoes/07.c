/*7. Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
A formula de convers ´ ao˜ e: ´ C = 5.0 * (F - 32.0)/9.0, sendo C a temperatura em Celsius
e F a temperatura em Fahrenheit.*/

#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	double c, f;
	
	printf("Temperatua em °F: ");
	scanf("%lf", &f);
	
	c =  5.0 * (f - 32.0)/9.0;
	
	printf("Temperatura em °C: %.2lf\n", c);
	
	
	return 0;
}


