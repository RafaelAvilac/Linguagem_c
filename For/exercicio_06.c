#include <stdio.h>

/*6 - Triângulo invertido de números

Crie um programa que imprima um triângulo invertido de números.

 O usuário entra com um número N.

 A saída esperada, para N = 5, seria:

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1 */

int main(){
	
	int n;
	
	printf("Informe um numero: ");
	scanf("%d", &n);
	
	for(int i = n; i >= 1; i--){
		for(int j = 1; j <= i; j++){
			printf("%d ", j);
		}
		printf("\n");
	}
	
	
	return 0;
}
