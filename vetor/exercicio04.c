#include <stdio.h>
#include <string.h>
#include <locale.h>

/*4 - Trabalhando com strings

Crie um programa que recebe 5 nomes 
e imprime apenas os nomes que contêm um determinado
caracter definido pelo usuário.
Exemplo: letra 'a'.*/

void prencher_nomes(char nomes[][20]){
	
	for(int i = 0; i < 5; i++){
		printf("Informe o %dº nome: ", i + 1);
		scanf("%19s", nomes[i]);	
	}
}

void verificar_nome(char nomes[][20],char caracter){
	printf("\nNomes que contém a letra '%c':\n", caracter);
	for(int i = 0; i < 5; i++){
		if(strchr(nomes[i], caracter) != NULL){
			printf("- %s\n", nomes[i]);
		}
	}
}

int main(){
	
	setlocale(LC_ALL, "");
	
	char nomes[5][20], caracter;

	prencher_nomes(nomes);
	printf("Informe o caracter: ");
	scanf(" %c", &caracter);
	verificar_nome(nomes, caracter);
	return 0;
}
