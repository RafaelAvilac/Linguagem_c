/*Exercício 4 — Conversor de Caractere

Objetivo:
Ler um único caractere e informar se ele é:

letra

dígito

símbolo

Conceitos reforçados:
ctype.h, if / else, entrada de caractere, lógica condicional*/

#include <stdio.h>
#include <ctype.h>

int main(void){
	
	char caract;
	
	printf("Digite algo: ");
	scanf(" %c", &caract);
	
	printf("\nTestando o caractere '%c':\n", caract);
	
	if(isalpha(caract)){
		if(isupper(caract)){
		printf("É uma letra maiuscula.\n");
		}
		if(islower(caract)){
			printf("E uma letra minuscula.\n");
		}
	
	}
	if(isdigit(caract)){
		printf("E um digito\n");
	}
	if(ispunct(caract)){
		printf("E simbolo\n");
	}	
	return 0;
}
