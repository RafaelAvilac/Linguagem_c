/*Exercício 17:

leia duas strings
limpe o \n
use strcmp
interprete o retorno corretamente*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void){
	
char primeiro[50], segundo[50];
int retorno;

	printf("Digite a primeira string: ");
	fgets(primeiro, 50, stdin);
	
	size_t tamanho_1 = strlen(primeiro);
	if(tamanho_1 > 0 && primeiro[tamanho_1 - 1] == '\n'){
		primeiro[tamanho_1 - 1] = '\0';
	}

	printf("Digite a segunda string: ");
	fgets(segundo, 50, stdin);
	
	size_t tamanho_2 = strlen(segundo);
	if(tamanho_2 > 0 && segundo[tamanho_2 - 1] == '\n'){
		segundo[tamanho_2 - 1] = '\0';
	}
	
	retorno = strcmp(primeiro, segundo);
	
	if(retorno == 0){
		printf("São %s e %s iguais alfabeticamente\n", primeiro, segundo);
	}else if(retorno > 0){
			printf("A %s vem depois da %s alfabeticamente\n", primeiro, segundo);
	}else {
			printf("A %s vem pprimeiro que a %s alfabeticamente\n", primeiro, segundo);
	}
	
	
	
	printf("Retorno: %d", retorno);
	
	return 0;  
}
