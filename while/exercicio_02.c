#include <stdio.h>

int main(){
	
	int numero;
	
	printf(" ==**== Sorteio ==**==\n");
	do{
	
		printf("Informe um numero: "); 
		scanf("%d", &numero);
		
			while(numero < 1 || numero > 10){
			printf("Informacao invalida.\n");
			
			printf("Informe um numero de 1 a 10: "); 
			scanf("%d", &numero);
			}
		
		
		
	}while( numero != 7);
	
	printf("Voce acertou\n");
	
	
	
	
	
	return 0;
}
