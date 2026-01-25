/*Exercício 1 — Cadastro de Funcionários
Objetivo

Criar um programa que cadastre N funcionários e exiba um relatório final.
Cada funcionário deve ter:
nome
salário base
percentual de bônus
O programa deve:
calcular o salário final
armazenar o salário final na struct
exibir:
nome
salário final
situação:
“Bônus Aplicado” se percentual > 0
“Sem Bônus” caso contrário
Conceitos reforçados
struct
vetor de struct
funções
cálculo e armazenamento de dados derivados*/

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

struct Funcionarios{
	char nome[100];
	float salario_base;
	float percent_bonus;
	float salario_final;
	char situacao[100];
};
void capitalizar_nome(char *nome) {
	
    int nova_palavra = 1;  // Flag para indicar início de nova palavra
    
    for(int i = 0; nome[i] != '\0'; i++) {
        if(nova_palavra && isalpha(nome[i])) {
            nome[i] = toupper(nome[i]);
            nova_palavra = 0;
        } else if(isspace(nome[i])) {
            nova_palavra = 1;
        } else {
            nome[i] = tolower(nome[i]);
        }
    }
}
void preencher_cadastro(struct Funcionarios fun[], int qtd){
	
	for(int i = 0; i < qtd; i++){
		
		printf("Dados do %dº funcionário:\n", i + 1);
	
		printf("Nome: ");
		fgets(fun[i].nome, sizeof(fun[i].nome), stdin);
		fun[i].nome[strcspn(fun[i].nome, "\n")] = '\0';
		
		capitalizar_nome(fun[i].nome);
		
		printf("Salário: ");
		scanf("%f", &fun[i].salario_base);
		
		printf("Percentual de Bônus (%%): ");
		scanf("%f", &fun[i].percent_bonus);
		
			while(fun[i].percent_bonus < 0){
				printf("Não permitido nº negativo..\nPercentual de bônus (%%): ");
				scanf("%f", &fun[i].percent_bonus);
			}
		while(getchar() != '\n');
		printf("-------------------------------------\n");
	}
}
void calculo_salario_final(struct Funcionarios fun[], int qtd){
	
	for(int i = 0; i < qtd; i++){
		
		fun[i].salario_final = fun[i].salario_base + (fun[i].salario_base * (fun[i].percent_bonus / 100));
		
			if(fun[i].percent_bonus > 0){		
				strcpy(fun[i].situacao,"Bônus Aplicado\n");
			}else{
				strcpy(fun[i].situacao,"Sem Bônus\n");
			}
		}
	}	


void exibir(struct Funcionarios fun[], int qtd){
	printf("\n\n====== Salários atualizados ======\n");
	
	for(int i = 0; i < qtd; i++){
		printf("\tNome: %s\n", fun[i].nome);
		printf("\tSalario base: %.2f\n", fun[i].salario_base);
		printf("\tSituação: %s", fun[i].situacao);
		printf("\tPercentual de aumento: %.2f%%\n", fun[i].percent_bonus);
		printf("\tSalario final: %.2f\n", fun[i].salario_final);
		
	}
}
int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int qtd;
	
	printf("====== Cadastro de Funcionarios ======\n");
	printf("Quantos funcionários deseja cadastrar: ");
	scanf("%d", &qtd);
	while(getchar() != '\n'); 
	
	while(qtd < 1){
		printf("Quantidade invalida.\nPermitido no mínimo 01 cadastro: ");
		scanf("%d", &qtd);
			while(getchar() != '\n'); 
	}
	
	struct Funcionarios fun[qtd];
	
	preencher_cadastro(fun, qtd);
	calculo_salario_final(fun, qtd);
	exibir(fun, qtd);
	return 0;
}
