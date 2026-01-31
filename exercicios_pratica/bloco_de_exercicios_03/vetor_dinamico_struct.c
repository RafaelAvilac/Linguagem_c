/*Vetor Dinâmico de struct (Alunos) — Resumo

Ler um valor N (quantidade de alunos)
Alocar dinamicamente um vetor de struct Aluno
Cada aluno deve ter:
nome (lido com fgets)
média (float)
situação (Aprovado / Reprovado)
Definir a situação:
Aprovado ? média = 6.0
Reprovado ? média < 6.0
Criar funções separadas para:
ler os dados
definir a situação
exibir o relatório
Tratar corretamente o \n do fgets
Limpar o buffer ao misturar scanf e fgets
Liberar a memória com free*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

typedef struct{

	char nome[100];
	float media;
	char situacao[20];
		
}Aluno;
void convert_maiuscula(char *str){
	for(int i = 0; str[i] != '\0'; i++){
		str[i] = toupper((unsigned char)str[i]);
	}
}
void definir_dimensao(int *tamanho){
	
	printf("Quantidade de alunos para cadastro: ");
	scanf("%d", tamanho);
	
	while(*tamanho < 1 || *tamanho > 1000){
		printf("Quantidade inválida (1-1000): ");
		scanf("%d", tamanho);
	}
	while(getchar() != '\n');
}
void preencher_dados(Aluno *alunos, int tamanho){
	for(int i = 0; i < tamanho; i++){
		printf("%dº aluno.\n", i + 1);
		printf("\tNome: ");
		fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
		alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';
		
		convert_maiuscula(alunos[i].nome);
		
		printf("\tMédia: ");
		scanf("%f", &alunos[i].media);
		while(alunos[i].media < 0 || alunos[i].media > 10){
			printf("Informe um valor válido: ");
			scanf("%f", &alunos[i].media);
		}
	while(getchar() != '\n');
	}
}
void exibir_relatorio(Aluno *alunos, int tamanho) {
    printf("\n=== RELATÓRIO DE ALUNOS ===\n");
    for(int i = 0; i < tamanho; i++) {
        printf("%dº aluno:\n", i + 1);
        printf("  Nome: %s\n", alunos[i].nome);
        printf("  Média: %.1f\n", alunos[i].media);
        printf("  Situação: %s\n", alunos[i].situacao);
        printf("------------------------\n");
    }
}
void verificar_situacao(Aluno *alunos, int tamanho){
	for(int i = 0; i < tamanho; i++){
		if(alunos[i].media >= 6){
			strcpy(alunos[i].situacao, "APROVADO");
		}else{
			strcpy(alunos[i].situacao, "REPROVADO");
		}
	}
}
int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int tamanho;
	Aluno *alunos;
	
	definir_dimensao(&tamanho);
	
	alunos = (Aluno *)malloc(tamanho * sizeof(Aluno));
	if(alunos == NULL){
		printf("Erro");
		return 1;
	}
	
	preencher_dados(alunos, tamanho);
	verificar_situacao(alunos, tamanho);
	exibir_relatorio(alunos, tamanho);
	
	free(alunos);
	return 0;
}
