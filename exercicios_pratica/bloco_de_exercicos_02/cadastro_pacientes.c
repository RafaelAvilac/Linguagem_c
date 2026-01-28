/*Cadastro de Pacientes (IMC)
Objetivo
Cadastrar N pacientes e gerar um relatório de IMC.
Dados de cada paciente
Nome
Peso (kg)
Altura (m)
Processamento
Calcular o IMC = peso / (altura²)
Armazenar o IMC na struct
Classificar conforme:
IMC < 18,5 ? Abaixo do peso
18,5 = IMC < 25 ? Peso norma
25 = IMC < 30 ? Sobrepeso
IMC = 30 ? Obesidade

Saída

Exibir para cada paciente:
Nome
Peso
Altura
IMC
Classificação
Regras
Usar struct e vetor de struct
Criar funções (cadastro, cálculo, classificação, exibição)
Não usar alocação dinâmica
Validar peso e altura (> 0)*/
#include <stdio.h>
#include <string.h>
#include <locale.h>


typedef struct{
	char nome[100];
	float peso;
	float altura;
	float imc;
	char classif[30];
}Paciente;
void preencher(Paciente p_1[], int qtd){
	
	for(int i = 0; i < qtd; i++){
		printf("\nNome do %dº paciente: ", i + 1);
		fgets(p_1[i].nome, sizeof(p_1[i].nome), stdin);
	
		p_1[i].nome[strcspn(p_1[i].nome, "\n")] = '\0';	
		
		printf("Peso: ");
		scanf("%f", &p_1[i].peso);
		
		while(p_1[i].peso < 1){
			printf("Valor digitado inválido: ");
			scanf("%f", &p_1[i].peso);
		}
		
		printf("Altura: ");
		scanf("%f", &p_1[i].altura);
		while(p_1[i].altura > 0){
			printf("Valor digitado inválido: ");
			scanf("%f", &p_1[i].altura);
		}
		while(getchar() != '\n');
	}
}
void calcular_imc(Paciente p_1[], int qtd){
	for(int i = 0; i < qtd; i++){
		p_1[i].imc = p_1[i].peso / (p_1[i].altura * p_1[i].altura );
	}
}
void classificar_imc(Paciente p_1[], int qtd){
	for(int i = 0; i < qtd; i++){
		if(p_1[i].imc < 18.5){
			strcpy(p_1[i].classif, "Abaixo do peso");
			
		}else if(p_1[i].imc < 25){
			strcpy(p_1[i].classif, "Peso normal");
		}else if(p_1[i].imc < 30){
			strcpy(p_1[i].classif, "Sobrepeso");
		}else{
			strcpy(p_1[i].classif, "Obesidade");
		}
	}
}
void exibir(Paciente p_1[], int qtd){
		printf("\n\n======= Relatório dos Pacientes ======\n");
	for(int i = 0; i < qtd; i++){
		
		printf("\tNome: %s\n", p_1[i].nome);
		printf("\tPeso: %.2f\n", p_1[i].peso);
		printf("\tAltura: %.2f\n", p_1[i].altura);
		printf("\tIMC: %.2f", p_1[i].imc);
			printf("\tClassificação: %s\n", p_1[i].classif);
	}
		printf("==========================================\n");
}

int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int qtd;
	
	printf("======= Cadastro de Pacientes =======\n\n");
	printf("Quantidade de pacientes para cadastro: ");
	scanf("%d", &qtd);

	
	while(qtd < 1){
		printf("Quanidade invalida.\nMínimo 01 cadastro: ");
			scanf("%d", &qtd);
	}
	while(getchar() != '\n');
	
	Paciente p_1[qtd];
	preencher( p_1, qtd);
	calcular_imc( p_1, qtd);
	classificar_imc( p_1, qtd);
	exibir( p_1, qtd);
	
	return 0; 
}
