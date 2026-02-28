/*36. Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume
de um cilindro circular e calculado por meio da seguinte formula: V = pi * raio2 * altura,
onde pi = 3:141592.*/

#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main(void){
	
	double altura, raio, volume;
	
	printf("Informe a altura e o raio de um cilindro circular:\n"),
	scanf("%lf %lf", &altura, &raio);
	
	volume = PI * (pow(raio, 2) * altura);
	
	printf("O volume de um cilindro circular e: %lf", volume);
	
	return 0;
}


