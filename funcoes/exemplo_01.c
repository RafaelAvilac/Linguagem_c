#include <stdio.h>


int somar(int a, int b){

return a + b;		
}


int main(){
	
	int resultado, a, b;
	
	printf("Informe o valor de a: " );
	scanf("%d", &a);
	printf("Informe o valor de b: " );
	scanf("%d", &b);
	
	resultado = somar(a, b);
	
	printf("Resultado de %d +  %d = %d", a, b, resultado);
	
	return 0;
}
