#include <stdio.h>
#include <math.h>
int main(void){
	
	
	double numero, potencia, raiz;
	
	scanf("%lf", &numero);
	
 if(numero > 0){
		potencia = numero * numero;
		raiz = sqrt(numero);
		
		printf("Potencia: %.2lf\n", potencia);
		printf("Raiz: %.2lf\n", raiz);
		
	}
	
	return 0;
}
