/*30. Leia um valor em real e a cotac¸ao do d ˜ olar. Em seguida, imprima o valor correspondente ´
em dolares*/

#include <stdio.h>

int main(void){
	
	double dolar, real, valor_correspondente;

	
	printf("Informe um valor em real e a cotacao do dolar :\n");
	scanf("%lf %lf", &real, &dolar);
	
	valor_correspondente = real / dolar;
	
	printf("Valor correspondente em dolares: %lf\n", valor_correspondente);
		
	return 0;
}
