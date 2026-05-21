/*Fa�a um programa que some os n�meros �mpares de 1 a 1000 e imprima a resposta. 
O bloco de repeti��o deve executar no m�ximo 500 vezes.*/

#include<stdio.h>
int main(){
	
	int soma_impar = 0, cont = 0;
	
	for(int i = 1; i <= 1000; i+=2){
		soma_impar += i;
		cont++;
	}

	printf("Soma de numeros impar: %d\n", soma_impar);
	printf("Bloco de repeti��o executou: %d\n", cont);
	return 0;
}
