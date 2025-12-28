#include <stdio.h>
#include <locale.h>

void preencher_numeros(int numeros[2][3]){
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			printf("Informe o nº do índice [%d][%d]: ", i, j);
			scanf("%d", &numeros[i][j]);
		}
	}
}
void exibir_numeros(int numeros[2][3]){
	printf("\n\nMatriz formatada.\n");

	for(int i = 0; i < 2; i++){
		printf("|");
		for(int j = 0; j < 3; j++){
			printf("%3d ", numeros[i][j]);
		}
	printf("|\n");
	}
}
int calcular_elementos(int numeros[2][3]){
	int soma = 0;
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			soma+= numeros[i][j];
		}
	}
	return soma;
}

int main(){
setlocale(LC_ALL, "");
	
	int numeros[2][3], total;
	preencher_numeros(numeros);
	exibir_numeros(numeros);
	total = calcular_elementos(numeros);
	
	printf("A soma total dos elementos é: %d.\n", total);
	
	return 0;
}
