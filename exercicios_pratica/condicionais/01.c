/*01-Faca um programa que receba dois numeros e mostre qual deles ´ e o maior*/


#include <stdio.h>

int main(void){
	
	int n1, n2;
	
	printf("Informe 2 numeros:\n");
	scanf("%d %d", &n1, &n2);
	
	if(n1 > n2){
		printf("O numero %d eh o maior\n", n1);
	}else if (n1 == n2){
		printf("Os numeros %d e %d sao iguais\n", n1, n2);
	}else{
		printf("O numero %d eh o maior\n", n2);
	}
	
	
	return 0;
}
