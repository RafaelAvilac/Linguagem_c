/*11. Fac¸a um programa que leia um numero inteiro positivo ´ N e imprima todos os numeros ´
naturais de 0 ate´ N em ordem crescente*/
#include <stdio.h>
int main(){
	
	int n, i;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	for(i = 0; i <= n; i++){
		printf("%d ", i);
	}
	
	return 0;
}
