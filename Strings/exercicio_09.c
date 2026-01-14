/*Exercício 18.2 — Concatenação com strcat

Ler duas strings
Limpar o \n
Concatenar a segunda na primeira com strcat
Mostrar o resultado*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){
	
	char primeira[50], segunda[50];
	
	printf("Digite a primeira palavra: "); 
	fgets(primeira, 50, stdin);
	
	printf("Digite a segunda palavra: ");
	fgets(segunda, 50, stdin);
	
	size_t tam_1 = strlen(primeira);
	size_t tam_2 = strlen(segunda);
	
	if(tam_1 > 0 && primeira[tam_1 -1] == '\n'){
		primeira[tam_1 - 1] = '\0';
		tam_1--;
	}
	if(tam_2 > 0 && primeira[tam_2 -1] == '\n'){
		primeira[tam_2 - 1] = '\0';
		tam_2--;
	}
	
	strcat(primeira, segunda);
	
	printf("\n%s\n", primeira);
	
	
	
	return 0;
}
