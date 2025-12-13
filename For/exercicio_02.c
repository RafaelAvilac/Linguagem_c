#include <stdio.h>

int main(){
	
	int n, soma = 0;
	
	printf("Informe um numero: ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i ++){
	
		soma = soma + i;
	}
	printf("A soma de 1 ate %d e : %d", n, soma);
	return 0;
}
