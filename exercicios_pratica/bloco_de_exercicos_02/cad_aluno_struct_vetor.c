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
#include <string.h>

struct Aluno{
	
	char nomes[100];
	float nota1;
	float nota2;
	float media_final;
	char situacao[100];
};

void preencher_dados(struct Aluno alunos [], int n){
	
	for(int i = 0; i < n; i++){
		printf("\n--- Cadastro do Aluno %d ---\n", i + 1);
		
		printf("Nome: ");
		fgets(alunos[i].nomes, 100, stdin);
		alunos[i].nomes[strcspn(alunos[i].nomes, "\n")] = '\0';
		
		printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);
        
        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);
        
        while(getchar() != '\n');
	}	
}

void media(struct Aluno alunos[], int n){
	
	for(int i = 0; i < n; i++){
		alunos[i].media_final = (alunos[i].nota1 + alunos[i].nota2) / 2.0;
			
	}
}

void situacao_aluno(struct Aluno alunos[], int n){
	
	for(int i = 0; i < n;i++){
		if(alunos[i].media_final >= 6){
			 strcpy(alunos[i].situacao, "Aprovado"); 
		}else{
			strcpy(alunos[i].situacao, "Reprovado");
		}
		
	}
	
}
void exibir_resultados(struct Aluno alunos[], int n){
    printf("\n=== RESULTADOS FINAIS ===\n");
    
    for(int i = 0; i < n; i++){
        printf("\n--- Aluno %d ---\n", i + 1);
        printf("Nome: %s\n", alunos[i].nomes);
        printf("Nota 1: %.2f\n", alunos[i].nota1);
        printf("Nota 2: %.2f\n", alunos[i].nota2);
        printf("Média: %.2f\n", alunos[i].media_final);
        printf("Situação: %s\n", alunos[i].situacao);
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
	situacao_aluno(alunos, n);
	exibir_resultados(alunos, n);
	
	return 0;
}
