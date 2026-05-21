//Faça um programa para ler um número inteiro n e dizer se ele é primo ou não

#include <stdio.h>

int main(){
	
	int n, cont = 0;
	
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			printf("%d ", i);
			cont++;
		}
	}
	printf("\n");
	
	if(cont == 2){
		printf("%d eh primo\n", n);
	}else{
		printf("%d nao eh primo\n", n);
	}
	
	return 0;
}
