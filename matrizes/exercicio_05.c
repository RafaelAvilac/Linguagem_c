#include <stdio.h>

/*5 – Verificação de matriz identidade

Uma matriz identidade é uma matriz quadrada onde os elementos da diagonal principal são 1 e os demais são 0.
 Escreva um programa que leia uma matriz 4x4, diga se ela é uma matriz identidade e exiba a matriz formatada.

Exemplo:

Matriz identidade? SIM  

1   0   0   0  
0   1   0   0  
0   0   1   0  
0   0   0   1*/

int main(){
	
	int numeros[4][4], identidade = 1;
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			printf("Informe o numero do indice [%d][%d]: ", i, j);
			scanf("%d", &numeros[i][j]);
		}
	}
	system("cls");
	for(int i = 0; i < 4; i++){
  	 	 for(int j = 0; j < 4; j++){
       		 if(i == j){
            // Regra 1: Diagonal principal
          		 if(numeros[i][j] != 1) {
              		  identidade = 0; // Se não for 1, já era!
            }
        } else {
            // Regra 2: Restante da matriz
            if(numeros[i][j] != 0) {
                identidade = 0; // Se não for 0, também não serve!
            }
        }
    }
}
	
	if(identidade == 1){
		
	printf("Matriz e identidade.\n");
	
	}else {
			printf("Matriz nao e identidade.\n");
		
	}		
	
		for(int i = 0; i < 4; i++){
				for(int j = 0; j < 4; j++){
					printf("%d\t", numeros[i][j]);
				}
				printf("\n");
			}
	
	
	return 0;
}
