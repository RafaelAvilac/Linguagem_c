#include <stdio.h>
/*1 - Apresentação do Jogador
Crie um programa que peça o primeiro nome de um jogador, sua idade e a quantidade de gols que ele já fez na carreira. Em seguida, exiba essas informações na tela.*/

int main(){
	
	char nome[10];
	int idade, gols;
	
	printf("Qual e seu nome: ");
	scanf("%s", &nome);
	
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	
	printf("Quantos gols ja marcou na carreira: ");
	scanf("%d", &gols);
	
	printf("\n\n*******Estatisticas*******");
	printf("\nNome: %s", nome);
	printf("\nIdade: %d", idade);
	printf("\nGols marcados: %d", gols);
	printf("\n****************************\n");
	
	
	
	return 0;
}
