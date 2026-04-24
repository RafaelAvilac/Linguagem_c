/*15. Fac¸a um programa que leia um numero inteiro positivo ´ ´impar N e imprima todos os
numeros ´ ´impares de 1 ate´ N em ordem crescente*/

#include <stdio.h>

int main(){
	
	int i, n;
	printf("Digite um numero impar positivo: ");
	scanf("%d", &n);
	
	while(n%2==0 || n < 1){
		printf("Digite um numero impar positivo: ");
		scanf("%d", &n);
	}
	for(i = 1; i <= n; i += 2){
		printf("%d ", i);
	}
	return 0;
}
