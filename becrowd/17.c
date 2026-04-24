/*17. Fac¸a um programa que leia um numero inteiro positivo ´ n e calcule a soma dos n primeiros
numeros naturais.*/
#include <stdio.h>

int main(){
	
	int n, i, soma = 0;
	
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &n);
	while(n < 1){
		printf("Digite um numero inteiro positivo: ");
		scanf("%d", &n);
	}
	
	for(i = 1; i <= n; i++){
		soma += i;
	}
	printf("Soma dos n numeros: %d\n", soma);
	return 0;
}
