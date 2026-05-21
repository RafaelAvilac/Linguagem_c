/*Escreva um programa que gere a saída abaixo.
Restrições:
? A instrução “printf” pode ser utilizada no máximo 2 vezes;
? O \n para saltar linha pode ser utilizado no máximo 2 vezes.
*
**
***
****
*****
******
*******
*********/

#include <stdio.h>

int main(){
	
	int n = 8;
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
