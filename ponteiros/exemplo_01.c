#include <stdio.h>


int main(){
	
	int numero = 33;
	int *n = &numero;
	
	printf("Antes: %d\n", numero);
	
	printf("Novo  valor: ");
	scanf("%d", n);
	
	printf("Agora: %d", numero);
	
	return 0;
}
