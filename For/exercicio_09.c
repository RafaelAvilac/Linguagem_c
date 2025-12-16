#include <stdio.h>

int main(){
	
	int carros;
	printf("Quantos carros serao cadastrados: ");
	scanf("%d", &carros);
	
	for(int i = 1; i <= carros; i++){
		
		char model[10];
		int ano, funcionando;
		
		printf("\nCarro %d:\n", i);
		printf("\nInforme o modelo: ");
		scanf("%s", model);
		
		printf("Informe ano de fabricacao: ");
		scanf("%d", &ano);
		
		printf("Carro funcionando (1-sim / 0-nao): ");
		scanf("%d", &funcionando);
		
		if(ano < 2005 && funcionando == 0){
			printf("O carro modelo %s, ano %d precisa de reparos UGENTES", model, ano);
			
		}else if (ano < 2005 && funcionando == 1){
			printf("O carro %s é antigo, recomenda-se uma revisão!", model);
		}else if(ano == 2005 && funcionando == 0){
			printf("O carro %s precisa de manutenção!", model);
		}else{
			printf("O carro %s está em boas condições!", model);
		}
		
		
		
		
		
	}
	
	
	return 0;
}
