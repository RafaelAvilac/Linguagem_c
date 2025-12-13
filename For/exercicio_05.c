#include <stdio.h>

/*4 – Números Pares de 1 a n
O usuário digita um número n, e o programa imprime todos os números pares de 1 até n.

Saída esperada (se o usuário digitar 10):

Numeros pares de 1 ate 10: 2 4 6 8 10*/


int main(){
	
	int n;
	
	printf("Informe um numero: ");
	scanf("%d", &n);
	if(n < 1){
		printf("Numero invalido.");
	}else{
		
		for(int i = 1; i <= n; i++){
		
		if(i % 2 == 0){
			printf("%d\t", i);
		}
	}
	}
	
	
	return 0;
}
