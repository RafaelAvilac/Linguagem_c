#include <stdio.h>
#include <locale.h>
#define LIN 3
#define COL 3

void preencher(int matriz[][COL]){
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("Informe o %dº número para o indice [%d][%d]: ", i +1, i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
}

void exibir(int matriz[][COL]){
	printf("Matriz formatada.\n");
	
	for(int i = 0; i < LIN; i++){
		printf("| ");
		for(int j = 0; j < COL; j++){
			printf("%3d", matriz[i][j]);
			
		}
		printf(" |\n");
	}
}
void calcular_linha(int matriz[][COL]){
    printf("\n\nResultado da soma das Colunas:\n");
	for(int j = 0; j < COL; j++){
		int soma = 0;
		for(int i = 0; i < LIN; i++){
			soma += matriz[i][j];
		}
		printf("\tColuna %d: %3d\n", j, soma);
	}
}
int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int matriz[LIN][COL];
	
	preencher(matriz);
	exibir(matriz);
 	calcular_linha(matriz);

	return 0;
}

