/*6. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
A formula de conversao e:  F = C*(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit
e C a temperatura em Celsius.*/

#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float c, f;
	
	printf("Temeratua em °c: ");
	scanf("%f", &c);
	
	f = c * (9.0/5.0) + 32.0;
	
	printf("Temperatura em °f: %f\n", f);
	
	
	return 0;
}

