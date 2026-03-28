#include <stdio.h>
#include <math.h>

int main(void){
	
	int numero;
	double raiz;
	
	scanf("%d", &numero);
	
	if(numero > 0){
		raiz = sqrt(numero);
		printf("Raiz quadrada: %.2lf\n", raiz);
	}else{
		printf("Numero invalido.\n");
	}
	
	return 0;
}
