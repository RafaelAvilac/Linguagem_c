#include <stdio.h>

int main(){
	
	int numeros[4][4], i, j, soma = 0;
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("Informe um valor para o indice [%d][%d]: ", i, j);
			scanf("%d", &numeros[i][j]);
		}
	}
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("%d\t", numeros[i][j]);
		}
		printf("\n");
	}
		for(i = 0; i < 4; i++){
			for(j = 0; j < 4; j++){
				if(i == j){
					soma += numeros[i][j];
				}	
			}	
		}
	printf("Soma da diagonal principal: %d", soma);
	
	return 0;
}
