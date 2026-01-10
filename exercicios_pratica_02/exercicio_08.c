#include <stdio.h>


int main(void){
	
	int numero;
	
	printf("Informe um numero inteiro-positivo: ");
	scanf("%d", &numero);
	
	while(numero <= 0){
		printf("Numero invalido\nDigite novamente: ");
		scanf("%d", &numero);
	}
	
	for(int i = 1; i <= numero; i++){
	
		printf("%d\t", i);
   
    }
	
	return 0;
}
