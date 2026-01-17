/*Crie um programa que:

Peça ao usuário para digitar uma frase (pode conter espaços).
Percorra essa frase caractere por caractere.
Conte quantas vogais (a, e, i, o, u) ela possui.
Exiba o total no final.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 100

void converter_frase(char *frase){
	
	for(int i = 0; frase[i] != '\0'; i++){
	printf("%c",toupper(frase[i]))	;
	}	
}

void verificar_vogais(char *frase, int *cont){
	
	for(int i = 0; frase[i] != '\0'; i++){
		
		char str = toupper(frase[i]);
		
		if(str == 'A' || str == 'E' || str == 'I' || str == 'O'|| str == 'U'){
		   (*cont)++;
		}	
	}	
}

int main(void){
	
	char frase[TAM];

	printf("Digite uma frase: ");
	fgets(frase, TAM, stdin);
	frase[strcspn(frase, "\n")] = '\0'; //troca \n por \0

	int cont = 0;
	
	verificar_vogais(frase, &cont);
	converter_frase(frase);
	
	printf("\n\nA frase possui %d vogáis.\n",cont);

	return 0;
}
