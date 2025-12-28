#include <stdio.h>
#include <locale.h>

/*Crie um programa em C que:

Leia uma matriz 3x4 de números inteiros
Calcule a soma dos elementos de cada linha
Exiba a soma correspondente a cada linha*/
void preencher_numeros(int numeros[3][4]){
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 4; j++){
			printf("Informe o %dº valor: ", i + 1);
			scanf("%d", &numeros[i][j]);
		}
	}
}

void exibir_numeros(int numeros[3][4]){
	printf("\n\nMatriz formatada.\n");

	for(int i = 0; i < 3; i++){
		printf("|");
		for(int j = 0; j < 4; j++){
			printf("%3d ", numeros[i][j]);
		}
	printf("|\n");
	}
}
void calcular_linha(int numeros[3][4]){
	printf("\n\n");
	for(int i = 0; i < 3; i++){
		int	somar = 0;
		printf("Linha %d:", i +1);
		for(int j = 0; j < 4; j++){
			somar += numeros[i][j];
		}
		printf("soma = %d\n", somar);
	}
}

int main(){
	setlocale(LC_ALL, "");
	int numeros[3][4];	

	preencher_numeros(numeros);
	exibir_numeros(numeros);
	calcular_linha(numeros);
	return 0;
}
