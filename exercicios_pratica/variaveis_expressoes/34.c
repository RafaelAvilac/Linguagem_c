/*34. Leia o valor do raio de um c´irculo e calcule e imprima a area do circulo correspondente.
A area do circulo e p * raio2, considere p = 3.141592.*/
#include <stdio.h>
#define PI 3.141592

int main(void){
	
	double raio, area;
	
	printf("Informe o valor do raio de um circulo: ");
	scanf("%lf", &raio);
	
	area = PI * (raio * raio);
	
	printf("Area do circulo correspondente: %lf\n", area);
	
	return 0;
}
