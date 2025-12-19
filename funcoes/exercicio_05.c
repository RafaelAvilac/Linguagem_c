#include <stdio.h>

/*5. Criar um padrão de asteriscos

Crie uma função que imprime um quadrado de asteriscos com lado n. O usuário dirá qual o valor de n e qual caracter será usado (*, #, $ ...).*/



void preencher_quadrado(int n, char caracter){
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			
			printf(" %c ", caracter);
	
		}
		printf("\n");		
	}	
}


int main(){
	
	int n;
	char caracter;
	printf("Iforme o valor do lado do quadrado: ");
	scanf("%d", &n);
	
		while(n <= 0){
   		printf("Informe um valor maior que zero: ");
   		scanf("%d", &n);
}
	printf("Informe o caractere que deseja preencher o quadrado: ");
	scanf(" %c", &caracter);
	
	preencher_quadrado(n, caracter);

	
	return 0;
}
