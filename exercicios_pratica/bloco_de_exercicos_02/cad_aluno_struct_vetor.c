/*NÍVEL MÉDIO — Exercício 1
Cadastro de Alunos com struct e vetor
Objetivo

Criar um programa em C que:

Cadastre N alunos (definido pelo usuário)
Para cada aluno, armazene:
nome
duas notas

Calcule e armazene a média
Ao final, exiba:
nome do aluno
média
situação (Aprovado / Reprovado)

Conceitos reforçados
struct
vetor de struct
funções
for
entrada segura (fgets)
lógica condicional

Regras
Use uma struct Aluno
Use um vetor de alunos
Crie pelo menos uma função
Não use alocação dinâmica (ainda)
Critério de aprovação: média = 6.0*/

#include <stdio.h>
#include <locale.h>


struct Aluno{
	
	char nomes[100];
	float nota1;
	float nota2;
	
};

void preencher_dados(struct Aluno alunos [], int n){
	
	for(int i = 0; i < n; i++){
		printf("\n--- Cadastro do Aluno %d ---\n", i + 1);
		
		printf("Nome: ");
		fgets(alunos[i].nomes, 100, stdin);
		
		printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);
        
        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);
        
        while(getchar() != '\n');
	}
	
}

void media(struct Aluno alunos[], int n){
	
 printf("\n=== MÉDIAS DOS ALUNOS ===\n");
 
	for(int i = 0; i < n; i++){
		float media = (alunos[i].nota1 + alunos[i].nota2) / 2.0;
		
		printf("\nAluno %d: %s\n", i + 1, alunos[i].nomes);
        printf("Nota 1: %.2f | Nota 2: %.2f | Média: %.2f\n", alunos[i].nota1, alunos[i].nota2, media);
	}
}


int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int n;
	
	printf("Quantos usuários deseja cadastrar: ");
	scanf("%d", &n);
    while(getchar() != '\n'); 
    
	struct Aluno alunos[n];
	
	preencher_dados(alunos, n);
	media(alunos, n);
	
	return 0;
}
