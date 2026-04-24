/*13. Fac¸a um programa que leia um numero inteiro positivo par ´ N e imprima todos os numeros ´
pares de 0 ate´ N em ordem crescente.*/

#include <stdio.h>
int main(){
	
	int i, n;
	printf("Digite um numero par: ");
	scanf("%d", &n);
	while(n % 2 != 0){
		printf("Apenas numero par: ");
		scanf("%d", &n);
	}
	for(i = 0; i <= n; i++){
		if(i % 2 == 0){
			printf("%d ", i);
		}
	}
	return 0;
}
