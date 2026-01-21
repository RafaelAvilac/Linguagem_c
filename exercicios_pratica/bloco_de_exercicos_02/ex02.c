/*Exercício 2 — Contador de Vogais

Objetivo:
Ler uma string e contar quantas vogais ela possui, considerando maiúsculas e minúsculas.

Conceitos reforçados:
for, string.h, ctype.h, leitura com fgets*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	
	char str[50];
	int cont = 0;
	
	printf("Escreva uma palavra: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("A palavra %s, possui: ", str);
	for(int i = 0; str[i] != '\0'; i++){
		str[i] = tolower(str[i]);
			if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o'|| str[i] == 'u'){
				cont++;
			}		
	
	}
	printf("%d vogais\n", cont);
	
	
	
	
	return 0;
}
