/*Cadastro de Produtos
Objetivo

Criar um programa em Linguagem C que cadastre N produtos e exiba um relatório financeiro.

Cada produto deve conter:
nome
preço de custo
preço de venda
O programa deve:
calcular o lucro de cada produto
armazenar o lucro na struct
classificar cada produto como:
“Lucro” ? lucro > 0
“Prejuízo” ? lucro < 0
“Empate” ? lucro = 0*/

#include <stdio.h>
#include <string.h>
#include <locale.h>
struct Produtos{
	char nome[100];
	float preco_custo;
	float preco_venda;
	float lucro;
	float percentual;
	char classif[100];
};

void preencher(struct Produtos product[], int qtd){
	
	for(int i = 0; i < qtd; i++){
	
		printf("\nNome do %dº produto: ", i + 1);
		fgets(product[i].nome, sizeof(product[i].nome), stdin);
		product[i].nome[strcspn(product[i].nome, "\n")] = '\0';

		printf("Preço de custo: ");
		scanf("%f", &product[i].preco_custo);
		
		printf("Preço de venda: ");
		scanf("%f", &product[i].preco_venda);
		
		while(getchar() != '\n');
	}
	printf("==================================\n");	
}
void calculo_lucro(struct Produtos product[], int qtd){
	
	for(int i = 0; i < qtd; i++){
		
		product[i].lucro = product[i].preco_venda - product[i].preco_custo;
		product[i].percentual = product[i].lucro / 	product[i].preco_venda;
	}	
}
void classificacao(struct Produtos product[], int qtd){
	
	for(int i = 0; i < qtd; i++){
		if(product[i].lucro > 0){
			strcpy(product[i].classif, "Lucro");
		}else if(product[i].lucro < 0){
			strcpy(product[i].classif, "Prejuízo");
		}else{
			strcpy(product[i].classif, "Empate");
		}
	}
}

void exibir(struct Produtos product[], int qtd){
	printf("\n\n====== Relatório ======\n\n");

	for(int i = 0; i < qtd; i++){
		printf("\t%dº produto: %s\n", i + 1, product[i].nome);
		printf("\tPreço de custo: %.2f\n", product[i].preco_custo);
		printf("\tPreço de venda: %.2f\n",product[i].preco_venda);
		printf("\tLucro: %.2f\n", product[i].lucro);
		printf("\tPercentual de lucro: %.2f%%\n", product[i].percentual);
		printf("\tSituação: %s\n\n", product[i].classif);
		
	}
	printf("==================================\n");		
}

int main(void){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int qtd;
	
	
	printf("====== Cadastro de produtos ======\n\n");
	printf("Quantos produtos deseja cadastrar: ");
	scanf("%d", &qtd);
	
	while(qtd < 1){
		printf("Quantidade inválida.\nMínimo permitido 01 unidade: ");
		scanf("%d", &qtd);
	}
	while(getchar() != '\n');
	
	struct Produtos product[qtd];
	
	preencher(product, qtd);
	calculo_lucro( product, qtd);
	classificacao( product, qtd);
	exibir(product, qtd);
	
	return 0;
}


