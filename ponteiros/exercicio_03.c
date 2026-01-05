/*Exercício 3: Inversão de String com Ponteiros
Crie uma função que inverte uma string alocada dinamicamente usando ponteiros.*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void inverter(char *str){
	
	int tamanho = strlen(str);
	for(int i = 0; i < tamanho / 2; i++){	
		char temp = str[i];
		str[i] = str[tamanho - 1 -i];
		str[tamanho - 1 -i] = temp; 	
	}
}

int main(void){
	
	char *str = malloc(100 * sizeof(char));	
	
	printf("Digite uma string: ");
	scanf(" %[^\n]", str);
	inverter(str);	
	printf("String invertida: %s", str);
	
	
	free(str);
	return 0;
}
