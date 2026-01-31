/*Vetor de Notas (Média) [Vetor Dinâmico]
 Objetivo
Criar um programa em Linguagem C que:
Leia um valor N
Aloque dinamicamente um vetor de N notas (float)
Valide as notas
Calcule a média aritmética
Exiba o resultado
Regras obrigatórias
O vetor deve ser alocado no main usando malloc
Validar:
N > 0
0 = nota = 10
Criar uma função exclusivamente para cálculo da média:
A função não pode imprimir
O main deve:
imprimir as notas
imprimir a média
Liberar a memória com free*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void dimensionar_vetor(int *qtd){
	
	printf("Quantas notas quer armazenar: ");
	scanf("%d", qtd);
	while(*qtd < 1){
		printf("\nDigite uma quantidade valida: ");
		scanf("%d", qtd);
	}
	printf("\n\n");
}
void preencher_notas(float *notas,int qtd){
	for(int i = 0; i < qtd; i++){
		printf("Informe a %dª nota: ", i + 1);
		scanf("%f", &notas[i]);
		while(notas[i] < 0 || notas[i] > 10){
			printf("Informe uma nota válida: ");
			scanf("%f", &notas[i]);
		}
	}
}
void calcular_media(float *notas,int qtd, float *media){
	float somar = 0;
	for(int i = 0; i < qtd; i++){
		somar += notas[i];
	}
	*media = somar / qtd;
}

void exibir_notas(float *notas, int qtd){
	printf("\nNotas: \n");
	for(int i = 0; i < qtd; i++){
		printf("%.2f ", notas[i]);
	}
}
int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int qtd;
	float *notas, media;
	
	dimensionar_vetor(&qtd);
	
	notas = (float *)malloc(qtd * sizeof(float));
	if(notas == NULL){
		printf("ERRO");
		return 1;
	}
	preencher_notas(notas, qtd);
	calcular_media(notas, qtd, &media);
	exibir_notas(notas, qtd);
	printf("\n\nMédia: %.2f\n", media);

	
	
	return 0;
}
