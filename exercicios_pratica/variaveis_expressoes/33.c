/*33. Leia o tamanho do lado de um quadrado e imprima como resultado a sua area.*/
#include <stdio.h>

int main(void){
	
	double lado, area;
	
	printf("Informe o tamanho do lado de um quadrado: ");
	scanf("%lf", &lado);
	
	area = lado * lado;
	
	printf("Resultado a sua area: %lf metros quadrados.\n", area);
	
	return 0;
}
