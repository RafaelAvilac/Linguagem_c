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
	
	
	printf("Digite seu nome: ");
	fgets(p_1.nome, sizeof(p_1.nome), stdin);
	p_1.nome[strcspn(p_1.nome, "\n")] = '\0';

	printf("Digite sua idade: ");
	scanf("%d", &p_1.idade);
	
	printf("Digite a letra referente ao sexo (M/F): ");
	scanf(" %c", &p_1.sexo);
	
	


	printf("\nNome: %s\n", p_1.nome);
	printf("Idade: %d\n", p_1.idade);
	printf("Sexo: %c\n", p_1.sexo);
	
	
	return 0;
}
