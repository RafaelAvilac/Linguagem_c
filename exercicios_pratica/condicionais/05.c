#include <stdio.h>

int main(void){
	
	int numero;
	
	scanf("%d", &numero);
	
	if(numero % 2 == 0){
		printf("Numero %d eh par\n", numero);
	}else{
		printf("Numero %d eh impar\n", numero);
	}
	
	return 0;
}
