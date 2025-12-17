#include <stdio.h>




void verificacao(int numero){
	
	if(numero % 2 == 0){
	
	printf("E par");
	
	}else{
	printf("E impar");
		
	}
	
	
}



int main(){
	
	int numero;

	
	printf("Informe um numero: ");
	scanf("%d", &numero);
	verificacao(numero);
	
	
	
	return 0;
}
