/* 14. Leia um angulo em graus e apresente-o convertido em radianos. A formula de conversao
e: R = G * p /180, sendo G o angulo em graus e ˆ R em radianos e p = 3:14.*/

#include <stdio.h>
#define PI 3.14

int main(void){
	
	double angulo, radianos;
	
	printf("Informe o angulo em graus: ");
	scanf("%lf", &angulo);
	
	radianos = (angulo * PI) / 180;
	
	printf("Radiano: %.2lf", radianos);
	
	return 0;
}
