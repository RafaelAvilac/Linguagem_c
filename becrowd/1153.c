/*Ler um valor N. Calcular e escrever seu respectivo fatorial. Fatorial de N = N * (N-1) * (N-2) * (N-3) * ... * 1.

Entrada
A entrada contém um valor inteiro N (0 < N < 13).

Saída
A saída contém um valor inteiro, correspondente ao fatorial de N.*/


#include <stdio.h>


int main(void){
	

	int n, fat = 1, i = 1;	
	scanf("%d", &n);
	
		while(i <= n){
		
		fat *= i;
	
		i++;
	}
	
	
	printf("%d\n", fat);

	
	return 0;
}
