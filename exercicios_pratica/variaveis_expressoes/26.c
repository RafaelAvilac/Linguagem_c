/*26. Leia um valor de area em metros quadrados ´ m2 e apresente-o convertido em hectares.
A formula de conversao e: H = M * 0,0001 sendo M a area em metros quadrados e H a area em hectares.*/

#include <stdio.h>
#define CONV_H 0.0001

int main(void){
	
	double m2, h;
	printf("Informe um valor de area em metros quadrados: ");
	scanf("%lf", &m2);
	
	h = m2 * CONV_H;
	
	printf("Conversao hectares: %lf", h);
	
	return 0;
}
