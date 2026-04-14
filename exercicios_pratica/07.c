#include <stdio.h>
int main(void){
	
	int n1, n2, soma;//variaveis
	
	printf("Digite dois numeros:\n");
	
	scanf("%d %d", &n1, &n2);//entradas
	
	soma = n1 + n2;//processamento
	
	if(soma > 10){
		printf("Resultado: %d\n", soma);//saida
	}
	
	
	return 0;
}
