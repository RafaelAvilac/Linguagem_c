#include <stdio.h>




void verificar_paridade(int numero){
	
	if(numero % 2 == 0){
	
	printf("E par\n");
	
	}else{
		
	printf("E impar\n");
		
	}
}

int main(){
	
	int numero;

	
	printf("Informe um numero: ");
	scanf("%d", &numero);
	
	verificacao(numero);
		
	return 0;
}
