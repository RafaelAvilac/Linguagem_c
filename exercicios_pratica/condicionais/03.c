#include <stdio.h>
#include <math.h>

int main(void){
	
	double numero, raiz, potencia;
	
	scanf("%lf", &numero);
	
	
	
	if(numero == 0){
		
		printf("Numero digitado eh %.2lf", numero);
		
	}else if(numero > 0){
		
		raiz = sqrt(numero);
		printf("Raiz quadrada: %.2lf\n", raiz);
	
	}else{
		
		potencia = numero * numero;
		printf("Numero ao quadrado: %.2lf\n", potencia);
	}
	
	
	return 0;
}
