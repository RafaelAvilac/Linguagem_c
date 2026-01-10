#include <stdio.h>

int main(void){
	
	int n;
	
	printf("Informe um numero de 1 a 10: ");
	scanf("%D", &n);
	
	while(n < 1 || n > 10){
		printf("Numero invalido\nDigite novamente: ");
		scanf("%d", &n);
	}
	printf("\nNumero %d validado.\n", n);
	
	return 0; 
}
