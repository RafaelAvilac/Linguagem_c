#include <stdio.h>
#include <stdlib.h>

typedef struct{
	
	char nome[50];
	int matricula;
	float nota1, nota2, nota3, media;
	
}Aluno;

int main(void){
	
	Aluno *alunos;
	
	int qtd;
	
	printf("Informe a quantidade de alunos para cadastro: ");
	scanf("%d", &qtd);
	
	alunos = (Aluno*) malloc(qtd * sizeof(Aluno));
	
	if(alunos == NULL){
		printf("Erro ao alocar memoria.\n");
		return 1;
	}
	
	printf("Cadastrar Aluno:\n");
	for(int i = 0; i < qtd; i++){
		printf("Nome do aluno: ");
		scanf(" %[^\n]", alunos[i].nome);
		printf("Nota 1: ");
		scanf("%f", &alunos[i].nota1);
		printf("Nota 2: ");
		scanf("%f", &alunos[i].nota2);
		printf("Nota 3: ");
		scanf("%f", &alunos[i].nota3);
	}
	
	
	free(alunos);
	return 0;
}
