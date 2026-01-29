#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define LIN 3
#define COL 2
void preencher(int matriz[][COL]){
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			matriz[i][j] = rand() % 30 + 1;
		}
	}
}

void exibir(int matriz[][COL]){
	printf("Matriz formatada.\n");
	
	for(int i = 0; i < LIN; i++){
		printf("|");
		for(int j = 0; j < COL; j++){
			printf(" %2d ", matriz[i][j]);
			
		}
		printf(" |\n");
	}
}
void exibir_transposta(int matriz[][COL]){
	printf("Matriz Transposta.\n");
	
	for(int i = 0; i < COL; i++){
		printf("|");
		for(int j = 0; j < LIN; j++){
			printf(" %2d ", matriz[j][i]);
			
		}
		printf(" |\n");
	}
}
int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	srand(time(NULL));
	int matriz[LIN][COL];
	

	preencher(matriz);
	printf("\n===== MATRIZ ORIGINAL (3x2) =====\n");
	exibir(matriz);
	printf("\n===== MATRIZ TRANSPOSTA (2x3) =====\n");
	exibir_transposta(matriz);
	printf("===============================\n");
	
	
	return 0;
}
