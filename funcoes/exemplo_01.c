#include <stdio.h>


void exibir_mensagem(){
	
	printf("Ate logo!");
}

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
	
	printf("Resultado de %d +  %d = %d\n", a, b, resultado);
	exibir_mensagem();
	return 0;
}
