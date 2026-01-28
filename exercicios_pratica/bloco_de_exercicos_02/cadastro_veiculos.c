/*Cadastro de Veículos

Este é o último exercício de fixação do nível médio, no mesmo padrão dos anteriores.
Objetivo
Criar um programa em Linguagem C que cadastre N veículos e gere um relatório de classificação.
Dados de cada veículo
Modelo
Ano de fabricação
Valor
Processamento
Classificar o veículo como:
Novo  até 3 anos de uso
Usado mais de 3 anos
Considerar o ano atual informado pelo usuário

Saída esperada (para cada veículo)
Modelo
Ano
Valor
Classificação (Novo / Usado)*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

#define ANO_ATUAL 2026
#define ANO_MIN 1972

typedef struct{
	
	char modelo[100];
	int ano;
	float valor;
	char classif[10];
	
}Veiculo;
void preencher(Veiculo veiculos[], int n){
	for(int i = 0; i < n; i++){
		printf("\n\n%dº veículo.\n", i + 1);
		printf("Modelo: ");
		fgets(veiculos[i].modelo, sizeof(veiculos[i].modelo), stdin);
		veiculos[i].modelo[strcspn(veiculos[i].modelo, "\n")] = '\0';
		
		printf("Ano de fabricação (4 digitos): ");
		scanf("%d", &veiculos[i].ano);
		while(veiculos[i].ano < ANO_MIN || veiculos[i].ano > ANO_ATUAL){
			printf("Digite um ano válido: ");
			scanf("%d", &veiculos[i].ano);
		}
		printf("Valor:R$ ");
		scanf("%f", &veiculos[i].valor);
		while(veiculos[i].valor < 0){
			printf("Digite um valor válido:R$ ");
			scanf("%f", &veiculos[i].valor);
		}		
		while(getchar()!= '\n');
	}
}

void classificar_veiculo(Veiculo veiculos[], int n){
	for(int i = 0; i < n; i++){
		if((ANO_ATUAL - veiculos[i].ano) <= 3 ){
			strcpy(veiculos[i].classif, "Novo");
		}else{
			strcpy(veiculos[i].classif, "Usado");
		}
	}	
}

void exibir(Veiculo veiculos[], int n){
	printf("\n====== Relatório ======\n\n");
	for(int i = 0; i < n; i++){
		printf("\t%dº veículo.\n", i + 1);
		printf("\tModelo: %s\n", veiculos[i].modelo);
		printf("\tAno: %d\n", veiculos[i].ano);
		printf("\tValor: %.2f\n", veiculos[i].valor);
		printf("\tSituação: %s", veiculos[i].classif);
	}
}

int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int n;
	printf("Cadastro de Veículos.\n\n");
	
	printf("Quantos veículos deseja cadastrar: ");
	scanf("%d", &n);
	while(n < 1){
		printf("Digite uma quantidade válida: ");
		scanf("%d", &n);
	}
	while(getchar() != '\n');
	
	Veiculo veiculos[n];
	preencher(veiculos, n);
	classificar_veiculo( veiculos, n);
	exibir(veiculos, n);
	return 0;
}
