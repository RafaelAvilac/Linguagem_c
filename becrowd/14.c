/*14. Fac¸a um programa que leia um numero inteiro positivo par ´ N e imprima todos os numeros ´
pares de 0 ate´ N em ordem decrescente*/
#include <stdio.h>

int main(){
	
	int i, n;
	
	printf("Digite um numero par positivo: ");
	scanf("%d", &n);
	while(n %2!=0 || n < 2){
		printf("Digite um numero par positivo: ");
	scanf("%d", &n);
	}
	for(i = n; i >= 0; i--){
		if(i %2==0){
			printf("%d ", i);
		}
	}
	return 0;
}
