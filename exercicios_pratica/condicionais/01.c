#include <stdio.h>

int main(void){
	
	int numero1, numero2;
	
	scanf("%d %d", &numero1, &numero2);
	
	if(numero1 > numero2){
		printf("Numero %d eh maior\n", numero1);
	
	}else if(numero1 == numero2){
		printf("Numeros %d e %d sao iguais", numero1, numero2);
	
	}else{
		printf("Numero %d eh maior\n", numero2);
	}
	
	
	
	return 0;
}
