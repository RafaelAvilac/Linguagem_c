/*35. Sejam a e b os catetos de um triangulo, onde a hipotenusa e obtida pela equacao:
hipotenusa = pa2 + b2. Fac¸a um programa que receba os valores de a e b e calcule
o valor da hipotenusa atraves da equacao. Imprima o resultado dessa operacao.*/

#include <stdio.h>
#include <math.h>

int main(void){
	
	double a, b, hipotenusa;
	printf("Informe os catetos a e b de um triangulo:\n");
	scanf("%lf %lf", &a, &b);
	
	hipotenusa = sqrt(pow(a, 2) + pow(b, 2));
	
	printf("Valor da hipotenusa: %lf\n", hipotenusa);
	
	
	return 0;
}
