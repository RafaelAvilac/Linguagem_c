#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{

int idade;
char sexo;
char nome[100];
}
Pessoa;

int main(void){
	
	Pessoa p_1;
	
	p_1.idade = 38;	
	p_1.sexo = 'M';
	strcpy(p_1.nome, "Rafael de Avila");
	
	printf("Nome: %s\n", p_1.nome);
	printf("Idade: %d\n", p_1.idade);
	printf("Sexo: %c\n", p_1.sexo);
	
	
	return 0;
}
