/*28. Faca a leitura de tres valores e apresente como resultado a soma dos quadrados dos 
tres valores lidos.*/

#include <stdio.h>
#include <math.h>

int main(void){
	
	int a, b, c, resultado;
	
	printf("Informe tres valores:\n");
	scanf("%d %d %d", &a, &b, &c);
	
	resultado = pow(a, 2) + pow(b, 2) + pow(c,2);
	
	printf("Resultado a soma dos quadrados: %d\n", resultado);
	
	return 0;
}
