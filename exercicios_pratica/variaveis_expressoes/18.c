/*18. Leia um valor de volume em metros cubicos ´ m3 e apresente-o convertido em litros. A
formula de conversao e: L = 1000 * M, sendo L o volume em litros e M o volume em
metros cubicos.*/

#include <stdio.h>
#define FATOR_CONVERSAO 1000
int main(void){
	
	double m_3, l;
	
	
	printf("Leia um valor de volume em metros cubicos: "); 
	scanf("%lf", &m_3);
	
	l = FATOR_CONVERSAO * m_3;
	
	printf("Conversao p/ litros: %lf\n", l);
	
	return 0;
}

