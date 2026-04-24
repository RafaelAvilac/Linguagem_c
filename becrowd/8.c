/*8. Escreva um programa que leia 10 numeros e escreva o menor valor lido e o maior valor ´
lido.*/

#include <stdio.h>
int main(void){
	
	int n, maior, menor;
	
	for(int i = 0; i < 10; i++){
		printf("Digite um numero: ");
		scanf("%d", &n);
		
		if(n > maior){
			maior = n;
		}
		if(n < menor){
			menor = n;
		}
	}
	printf("Menor: %d\n", menor);
	printf("Maior: %d\n", maior);
	
	
	return 0;
}
