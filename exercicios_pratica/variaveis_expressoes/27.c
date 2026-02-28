/*27. Leia um valor de area em hectares e apresente-o convertido em metros quadrados ´ m2.
A formula de conversao e: M = H * 10000, sendo M a area em metros quadrados e H a area em hectares.*/

#include <stdio.h>
#define CONV_M2 10000

int main(void){
	
	double h, m2;
	
	printf("Informe um valor de area em hectares: ");
	scanf("%lf", &h);
	
	m2 = h * CONV_M2;
	
	printf("Conversao em metros quadrados: %.2lf\n", m2);
	
	return 0;
}
