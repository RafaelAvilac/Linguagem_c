/* 19. Leia um valor de volume em litros e apresente-o convertido em metros cubicos m3. A
formula de conversao e: M = L/1000, sendo L o volume em litros e M o volume em metros
cubicos.*/

#include <stdio.h>
#define LITROS_PARA_M3 1000
 
int main(void){
	
	double m_3, l;
	
	printf("Informe um valor de volume em litros: ");
	scanf("%lf", &l);
	
	m_3 = l / LITROS_PARA_M3;
	
	printf("Convercao em metros cubicos: %lf\n", m_3);
	
	return 0;
} 
