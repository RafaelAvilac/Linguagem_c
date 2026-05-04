/*Faça um programa que some os números ímpares de 1 a 1000 e imprima a resposta. 
O bloco de repetição deve executar no máximo 500 vezes.*/

#include<stdio.h>
int main(){
	
	int soma_impar = 0, cont = 0;
	
	for(int i = 1; i <= 1000; i+=2){
		soma_impar += i;
		cont++;
	}
	printf("Soma de numeros impar: %d\n", soma_impar);
	printf("Bloco de repetição executou: %d\n", cont);
	return 0;
}
