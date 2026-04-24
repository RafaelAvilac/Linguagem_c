/*18. Escreva um algoritmo que leia certa quantidade de numeros e imprima o maior deles e ´
quantas vezes o maior numero foi lido. A quantidade de n ´ umeros a serem lidos deve ser ´
fornecida pelo usuario.*/
#include <stdio.h>
int main(){
	
	int n, i, numero, maior = -1000000, cont = 0;
	
	printf("Quantos numeros deseja comparar: ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){	
		printf("%d numero: ", i+1);
		scanf("%d", &numero);
			if(numero > maior){
				maior = numero;
				cont = 1;
			}else if(numero == maior){
				cont++;
			}
	}
	
	printf("Maior numero: %d\n", maior);
	printf("Vezes que repetiu: %d\n", cont);
	
	return 0;
}
