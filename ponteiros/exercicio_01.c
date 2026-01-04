/*Exercício 1: Soma de Dois Números com Ponteiros
Crie uma função soma que recebe dois ponteiros
para inteiros e retorna a soma dos valores apontados.*/

#include<stdio.h>
#include<stdlib.h>

int somar(int *a, int *b){
	
	return *a + *b; 
}

int main(){
	
	int a, b, total;
	
	printf("Valor de a: ");
	scanf("%d", &a);
	
	printf("Valor de b: ");
	scanf("%d", &b);
	
	total = somar(&a, &b);
	 printf("\nTotal: %d\n", total);
	
	
	return 0;
}
