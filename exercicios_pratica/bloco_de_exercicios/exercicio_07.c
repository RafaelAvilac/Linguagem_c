/*Crie um programa que peça um número inteiro ao usuário. 
Utilizando um laço for, exiba a tabuada desse número de 1 a 10.*/

#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "");
	int numero;
	
	printf("Informe um nº: ");
	scanf("%d", &numero);
	
	for(int i = 1; i <= 10; i++){
		printf("%2d x %2d = %2d\n", numero, i,numero * i);
		
	}
	
	
	return 0;
}
