#include <stdio.h>
#include <stdlib.h>

struct No {
	
	int valor;
	struct No *proximo;
	
};

int main(){
	
	struct	No *primeiro = (struct No*) malloc(sizeof(struct No));
	
	primeiro->valor = 42;
	
	printf("Valor do no: %d", primeiro->valor);
	
	
	return 0;
}
