#include <stdio.h>

int main(){

	
	int total_prod;
	
	printf("Informe o total de produtos a ser cadastrado: ");
	scanf("%d", &total_prod);
	
	if(total_prod < 0){
		printf("Valor invalido");
	}else{
		
		for(int i = 1; i <= total_prod; i++){
			
			char nome[30];
			int  estoque, minimo;
			
			printf("\nProduto: %d\n", i);
			printf("Nome do produto: ");
			scanf("%s", nome);
			printf("Quantidade em estoque: ");
			scanf("%d", &estoque);
			printf("Estoque minimo recomendado: "); 
			scanf("%d", &minimo);
			
			if(estoque < minimo){
				printf("O produto %s, precisa ser reposto. (Estoque: %d, Minimo %d)", nome, estoque, minimo);
				
			}else{
				printf("O produto %s, tem estoque suficiente. (Estoque: %d, Minimo %d)", nome, estoque, minimo);
			}
			
			
			
		}
		
	}

	return 0;
}
