#include <stdio.h>

/*4 – Transposta de uma matriz

Dada uma matriz 3x2, imprima a sua transposta (2x3).

Exemplo de saída:
Digite os 6 valores da matriz 3x2 (linha por linha):

Elemento [0][0]: 10
Elemento [0][1]: 12
Elemento [1][0]: 8
Elemento [1][1]: 7
Elemento [2][0]: 19
Elemento [2][1]: 20

Matriz original:
|  10  12 |
|   8   7 |
|  19  20 |

?Matriz transposta:
|  10   8  19 |
|  12   7  20 |*/

int main(){
	
	int numeros[3][2];
	
	printf("Digite os 6 valores da matriz 3x2 (linha por linha): \n\n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			printf("Elemento [%d][%d]: ", i, j);
			scanf("%d", &numeros[i][j]);
		}
	}
	printf("\nMatriz original: \n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			printf("%d\t", numeros[i][j]);
		}
		printf("\n");
	}
		printf("\nMatriz transposta: \n");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			printf("%d\t", numeros[j][i]);
		}
		printf("\n");
	}
	return 0;
}
