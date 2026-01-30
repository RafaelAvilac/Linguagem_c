#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define A_LIN 2
#define A_COL 3
#define B_LIN 3  // Deve ser igual a A_COL
#define B_COL 2
#define C_LIN A_LIN
#define C_COL B_COL


void preencher_matrizes(int a[][A_COL],int b[][B_COL]){
	
	for(int i = 0; i < A_LIN; i++){
		for(int j = 0; j < A_COL; j++){
			a[i][j] = rand() % 20 +1;
		}
	}
	for(int i = 0; i < B_LIN; i++){
		for(int j = 0; j < B_COL; j++){
			b[i][j] = rand() % 20 +1;
		}
	}
}
void multiplicar(int a[][A_COL],int b[][B_COL], int c[][C_COL]){
	 // Inicializar C com zeros
	for(int i = 0; i < C_LIN; i++){         	
		for(int j = 0; j < C_COL; j++){         
			c[i][j] = 0;
		}
	}

	for(int i = 0; i < A_LIN; i++){
		for(int j = 0; j < B_COL; j++){
			for(int k = 0; k < A_COL; k++){    	// Elementos a multiplicar
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}
	
void exibir_matriz_a(int a[][A_COL]){
	
	for(int i = 0; i < A_LIN; i++) {
        printf("| ");
        for(int j = 0; j < A_COL; j++) {
            printf("%3d ", a[i][j]);
        }
        printf("|\n");
    }		
}
void exibir_matriz_b(int b[][B_COL]){
	
	for(int i = 0; i < B_LIN; i++) {
        printf("| ");
        for(int j = 0; j < B_COL; j++) {
            printf("%3d ", b[i][j]);
        }
        printf("|\n");
    }		
}
void exibir_matriz_c(int c[][C_COL]){
	
	for(int i = 0; i < C_LIN; i++) {
        printf("| ");
        for(int j = 0; j < C_COL; j++) {
            printf("%3d ", c[i][j]);
        }
        printf("|\n");
    }		
}

int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	srand(time(NULL));
	
	int a[A_LIN][A_COL], b[B_LIN][B_COL], c[C_LIN][C_COL]; 
	preencher_matrizes(a, b);
	multiplicar(a, b, c);
	printf("\n========== MULTIPLICAÇÃO DE MATRIZES ==========\n\n");
	printf("Matriz A (%dx%d):\n", A_LIN, A_COL);
	exibir_matriz_a( a);
	  printf("\nMatriz B (%dx%d):\n", B_LIN, B_COL);
	exibir_matriz_b( b);
	printf("\nMatriz C = A × B (%dx%d):\n", C_LIN, C_COL);
	exibir_matriz_c( c);
	printf("\n===============================================\n");
	return 0;
}
