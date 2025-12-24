#include <stdio.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL, "");
	
	int i, j, matriz[2][3], soma = 0;
	
	for(i = 0; i < 2; i++){
	
		for(j = 0; j < 3; j++){
			printf("Agencia %d dia %d:R$ ", i +1, j +1);
			scanf("%d", &matriz[i][j]);
			soma += matriz[i][j];
		}
	}
	printf("Total arrecadado: R$%d", soma);
	
	
	
	return 0;
}
